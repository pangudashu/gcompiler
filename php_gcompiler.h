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

#ifndef PHP_GCOMPILER_H
#define PHP_GCOMPILER_H

extern zend_module_entry gcompiler_module_entry;
#define phpext_gcompiler_ptr &gcompiler_module_entry

#define PHP_GCOMPILER_VERSION "0.1.0" /* Replace with version number for your extension */

#ifdef PHP_WIN32
#	define PHP_GCOMPILER_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_GCOMPILER_API __attribute__ ((visibility("default")))
#else
#	define PHP_GCOMPILER_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

/*
ZEND_BEGIN_MODULE_GLOBALS(gcompiler)
	zend_long  global_value;
	char *global_string;
ZEND_END_MODULE_GLOBALS(gcompiler)
*/

#define GCOMPILER_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(gcompiler, v)

#define IS_DEBUG	1

typedef struct _zend_script {
	zend_string		*filename;
	zend_op_array	*main_op_array;
	HashTable		function_table;
	HashTable		class_table;
	HashTable		zend_constant;
} zend_script;

#if defined(ZTS) && defined(COMPILE_DL_GCOMPILER)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif	/* PHP_GCOMPILER_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
