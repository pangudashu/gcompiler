#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/php_string.h"
#include "Zend/zend_exceptions.h"
#include "php_gcompiler.h"

#include "proto/out_cpp/zend_op_array.pb.h"
#include "proto/out_cpp/zend_types.pb.h"
#include "proto/out_cpp/zend_script.pb.h"

#include <string>  
#include <fstream>  
#include <sstream>  

BEGIN_EXTERN_C()

static int serialize_zval(gphp::Zval *pb_val, zval *val);
static int serialize_array(gphp::HashTable *pb_arr, zval *val);
static void print_hash(const gphp::HashTable arr);
static void print_zval(const gphp::Zval *pb_val);

static int serialize_array(gphp::HashTable *pb_arr, zval *val) /*{{{*/
{
	zend_ulong num_key;
	zend_string *string_key = NULL;
	zval *arr_value;
	gphp::HashTable_Item *pb_arr_value;

	ZEND_HASH_FOREACH_KEY_VAL(Z_ARRVAL_P(val), num_key, string_key, arr_value) {
		pb_arr_value = pb_arr->add_items();

		if (string_key) {
			pb_arr_value->set_key_type(gphp::HashTable::Item::KEYTYPE_STR);
			pb_arr_value->set_str_key(std::string(ZSTR_VAL(string_key), ZSTR_LEN(string_key)));
		} else {
			pb_arr_value->set_key_type(gphp::HashTable::Item::KEYTYPE_NUM);
			pb_arr_value->set_num_key(num_key);
		}
		if (serialize_zval(pb_arr_value->mutable_val(), arr_value) != SUCCESS) {
			return FAILURE;
		}
	} ZEND_HASH_FOREACH_END();

	return SUCCESS;
} /*}}}*/

static void print_zval(const gphp::Zval *pb_val) /*{{{*/
{
	const gphp::Zval::Value value = pb_val->value();

	switch (pb_val->type()) {
		case gphp::Zval::TYPE_NULL:
			std::cout << "(type: " << pb_val->type() << "\tvalue: NULL" << ")\n";
			break;
		case gphp::Zval::TYPE_BOOL:
			std::cout << "(type: " << pb_val->type() << "\tvalue: " << value.bval() << ")\n";
			break;
		case gphp::Zval::TYPE_LONG:
			std::cout << "(type: " << pb_val->type() << "\tvalue: " << value.lval() << ")\n";
			break;
		case gphp::Zval::TYPE_DOUBLE:
			std::cout << "(type: " << pb_val->type() << "\tvalue: " << value.dval() << ")\n";
			break;
		case gphp::Zval::TYPE_STRING:
			std::cout << "(type: " << pb_val->type() << "\tvalue: " << value.str() << ")\n";
			break;
		case gphp::Zval::TYPE_ARRAY:
			std::cout << "(type: " << pb_val->type() << "\tvalue: " << "\n";
			print_hash(value.arr());
			break;
	}
} /*}}}*/

static void print_hash(const gphp::HashTable arr) /*{{{*/
{
	int i = 0;
	const gphp::HashTable_Item *item;
	
	for(; i < arr.items_size(); i++){
		item = &(arr.items(i));
		if (item->key_type() == gphp::HashTable_Item::KEYTYPE_STR) {
			std::cout << "\tkey:" << item->str_key() << "\t val: ";
		} else {
			std::cout << "\tkey:" << (int64_t)item->num_key() << "\t val: ";
		}
		print_zval(&item->val());
	}
	std::cout << ")\n";
} /*}}}*/

static int serialize_zval(gphp::Zval *pb_val, zval *val) /*{{{*/
{
	gphp::Zval_Value *value = pb_val->mutable_value();

	switch (Z_TYPE_P(val)) {
		case IS_NULL:
			pb_val->set_type(gphp::Zval::TYPE_NULL);
			break;
		case IS_FALSE:
			pb_val->set_type(gphp::Zval::TYPE_BOOL);
			value->set_bval(false);
			break;
		case IS_TRUE:
			pb_val->set_type(gphp::Zval::TYPE_BOOL);
			value->set_bval(true);
			break;
		case IS_LONG:
			pb_val->set_type(gphp::Zval::TYPE_LONG);
			value->set_lval(Z_LVAL_P(val));
			break;
		case IS_DOUBLE:
			pb_val->set_type(gphp::Zval::TYPE_DOUBLE);
			value->set_dval(Z_DVAL_P(val));
			break;
		case IS_STRING:
			pb_val->set_type(gphp::Zval::TYPE_STRING);
			value->set_str(std::string(Z_STRVAL_P(val), Z_STRLEN_P(val)));
			break;
		case IS_ARRAY:
			pb_val->set_type(gphp::Zval::TYPE_ARRAY);
			if (serialize_array(value->mutable_arr(), val) != SUCCESS) {
				zend_throw_exception(NULL, "Serialize literal array error", 0);
				return FAILURE;
			}
			break;
		case IS_UNDEF:
		case IS_OBJECT:
		case IS_RESOURCE:
		case IS_REFERENCE:
			zend_throw_exception(NULL, "Unexpected literal type", 0);
			return FAILURE;
	}

	return SUCCESS;
} /*}}}*/

static int get_op_var(zend_op_array *op_array, int type, znode_op *op) /*{{{*/
{
	if (type == IS_CONST) {
		return op->var / sizeof(zval);
	} else if (type & (IS_VAR|IS_TMP_VAR)) {
		return (op->var / sizeof(zval)) - (op_array->last_var + ZEND_CALL_FRAME_SLOT);
	} else if (type == IS_CV) {
		return (op->var / sizeof(zval)) - ZEND_CALL_FRAME_SLOT;
	}
} /*}}}*/

int serialize_op_array(gphp::ZendOpArray *pb_op_array, zend_op_array *op_array) /*{{{*/
{
	//1)opcodes
	uint32_t i = 0;
	zend_op	*opline;
	gphp::Opline *pb_opline;

#ifdef IS_DEBUG
	std::cout << "=======================Begin serialize opcodes=======================\n";
#endif

	for(i = 0; i < op_array->last; i++) {
		opline = &(op_array->opcodes[i]);
		pb_opline = pb_op_array->add_opcodes();

		pb_opline->set_opcode((gphp::Opcode)(opline->opcode));
		/* op1 */
		pb_opline->set_op1_type((gphp::Opline::OpType)opline->op1_type);
		pb_opline->set_op1(get_op_var(op_array, opline->op1_type, &opline->op1));
		/* op2 */
		pb_opline->set_op2_type((gphp::Opline::OpType)opline->op2_type);
		pb_opline->set_op2(get_op_var(op_array, opline->op2_type, &opline->op2));
		/* result */
		pb_opline->set_result_type((gphp::Opline::OpType)opline->result_type);
		pb_opline->set_result(get_op_var(op_array, opline->result_type, &opline->result));
		
		pb_opline->set_extended_value(opline->extended_value);
		pb_opline->set_lineno(opline->lineno);

#ifdef IS_DEBUG
		std::cout 
			<< "opcode: " 			<< pb_opline->opcode()  << "\t"
			<< "op1: " 				<< pb_opline->op1() << "\t"
			<< "op1_type: " 		<< pb_opline->op1_type() << "\t"
			<< "op2: " 				<< pb_opline->op2() << "\t"
			<< "op2_type: " 		<< pb_opline->op2_type() << "\t"
			<< "result: " 			<< pb_opline->result() << "\t"
			<< "result_type: " 		<< pb_opline->result_type() << "\t"
			<< "ext_value: " 		<< pb_opline->extended_value() << "\t"
			<< "lineno: " 			<< pb_opline->lineno() << "\n";
#endif
	}

	pb_op_array->set_var_size(op_array->last_var + op_array->T);

	//2)literals
	gphp::Zval *pb_zval;

#ifdef IS_DEBUG
	std::cout << "=======================Begin serialize literals=======================\n";
	std::cout << "literal size:" << op_array->last_literal << "\n";
#endif

	for (i = 0; i < op_array->last_literal; i++) {
		pb_zval = pb_op_array->add_literals();

		if (serialize_zval(pb_zval, &op_array->literals[i]) != SUCCESS) {
			return FAILURE;
		}
#ifdef IS_DEBUG
		print_zval(pb_zval);
#endif
	}
	return SUCCESS;
} /*}}}*/

const char *zend_script_serialize(const zend_script *script, uint32_t *pb_data_size)
{
#ifdef IS_DEBUG
	std::cout << "compile file: " << ZSTR_VAL(script->filename) << "\n";
#endif

	gphp::ZendScript new_script;

	new_script.set_script_name(std::string(ZSTR_VAL(script->filename)));
	//1) op array
	gphp::ZendOpArray *pb_op_array = new_script.mutable_main_op_array();
	if (serialize_op_array(pb_op_array, script->main_op_array) != SUCCESS) {
		return NULL;
	}

	//2) function table
	//
	//3) class table
	//
	//4) constants
	//

	//5) source
	std::ifstream t(ZSTR_VAL(script->filename));  
	std::stringstream buffer;  
	buffer << t.rdbuf();  

	new_script.set_source(std::string(buffer.str()));

	std::string pb_data;
	if (!new_script.SerializeToString(&pb_data)) {
		return NULL;
	}

	*pb_data_size = pb_data.size();

	return pb_data.c_str();
}

END_EXTERN_C()

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
