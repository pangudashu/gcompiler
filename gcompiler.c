/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2018 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_gcompiler.h"

/* If you declare any globals in php_gcompiler.h uncomment this:
ZEND_DECLARE_MODULE_GLOBALS(gcompiler)
*/

/* True global resources - no need for thread safety here */
static int le_gcompiler;

/* {{{ PHP_INI
 */
/* Remove comments and fill if you need to have entries in php.ini
PHP_INI_BEGIN()
    STD_PHP_INI_ENTRY("gcompiler.global_value",      "42", PHP_INI_ALL, OnUpdateLong, global_value, zend_gcompiler_globals, gcompiler_globals)
    STD_PHP_INI_ENTRY("gcompiler.global_string", "foobar", PHP_INI_ALL, OnUpdateString, global_string, zend_gcompiler_globals, gcompiler_globals)
PHP_INI_END()
*/
/* }}} */

static zend_op_array *gcompile(zend_string *file_path)
{
	zend_op_array *op_array = NULL;
	uint32_t orig_compiler_options = 0;
	zend_file_handle file_handle;

	file_handle.filename = ZSTR_VAL(file_path);
	file_handle.type = ZEND_HANDLE_FILENAME;

	zend_try {
		orig_compiler_options = CG(compiler_options);
		CG(compiler_options) |= ZEND_COMPILE_HANDLE_OP_ARRAY;
		CG(compiler_options) |= ZEND_COMPILE_IGNORE_INTERNAL_CLASSES;
		CG(compiler_options) |= ZEND_COMPILE_DELAYED_BINDING;
		CG(compiler_options) |= ZEND_COMPILE_NO_CONSTANT_SUBSTITUTION;

		op_array = zend_compile_file(&file_handle, ZEND_REQUIRE);
	} zend_catch {
		CG(compiler_options) = orig_compiler_options;
	} zend_end_try();

	return op_array;
}

PHP_FUNCTION(gcompile)
{
	zend_string *file_path;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(file_path)
	ZEND_PARSE_PARAMETERS_END();

	zend_script script;
	zend_op_array *orig_active_op_array;
	HashTable *orig_function_table, *orig_class_table;
	zval orig_user_error_handler;

	script.filename = file_path;

	zend_hash_init(&script.function_table, 8, NULL, ZEND_FUNCTION_DTOR, 0);
	zend_hash_init(&script.class_table, 8, NULL, ZEND_CLASS_DTOR, 0);
	zend_hash_init(&script.zend_constant, 8, NULL, ZVAL_PTR_DTOR, 0);

	/* Save the original values for the op_array, function table and class table */
	orig_active_op_array = CG(active_op_array);
	orig_function_table = CG(function_table);
	orig_class_table = CG(class_table);
	ZVAL_COPY_VALUE(&orig_user_error_handler, &EG(user_error_handler));
	
	/* Override them with ours */
	CG(function_table) = &script.function_table;
	EG(class_table) = CG(class_table) = &script.class_table;
	ZVAL_UNDEF(&EG(user_error_handler));

	script.main_op_array = gcompile(file_path);

	/* Restore originals */
	CG(active_op_array) = orig_active_op_array;
	CG(function_table) = orig_function_table;
	EG(class_table) = CG(class_table) = orig_class_table;
	EG(user_error_handler) = orig_user_error_handler;

	//todo
	if (script.main_op_array) {
		zend_script_serialize(&script);
	}
	
	if (script.main_op_array) {
		destroy_op_array(script.main_op_array);
		efree(script.main_op_array);
	}

	zend_hash_destroy(&script.function_table);
	zend_hash_destroy(&script.class_table);
	zend_hash_destroy(&script.zend_constant);
}

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(gcompiler)
{
	/* If you have INI entries, uncomment these lines
	REGISTER_INI_ENTRIES();
	*/
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(gcompiler)
{
	/* uncomment this line if you have INI entries
	UNREGISTER_INI_ENTRIES();
	*/
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(gcompiler)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "gcompiler support", "enabled");
	php_info_print_table_end();

	/* Remove comments if you have entries in php.ini
	DISPLAY_INI_ENTRIES();
	*/
}
/* }}} */

/* {{{ gcompiler_functions[]
 *
 * Every user visible function must have an entry in gcompiler_functions[].
 */
const zend_function_entry gcompiler_functions[] = {
	PHP_FE(gcompile,	NULL)		/* For testing, remove later. */
	PHP_FE_END	/* Must be the last line in gcompiler_functions[] */
};
/* }}} */

/* {{{ gcompiler_module_entry
 */
zend_module_entry gcompiler_module_entry = {
	STANDARD_MODULE_HEADER,
	"gcompiler",
	gcompiler_functions,
	PHP_MINIT(gcompiler),
	PHP_MSHUTDOWN(gcompiler),
	NULL,		/* Replace with NULL if there's nothing to do at request start */
	NULL,		/* Replace with NULL if there's nothing to do at request start */
	PHP_MINFO(gcompiler),
	PHP_GCOMPILER_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_GCOMPILER
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(gcompiler)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
