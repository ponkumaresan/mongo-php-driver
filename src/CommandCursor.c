/*
  +---------------------------------------------------------------------------+
  | PHP Driver for MongoDB                                                    |
  +---------------------------------------------------------------------------+
  | Copyright 2013-2014 MongoDB, Inc.                                         |
  |                                                                           |
  | Licensed under the Apache License, Version 2.0 (the "License");           |
  | you may not use this file except in compliance with the License.          |
  | You may obtain a copy of the License at                                   |
  |                                                                           |
  | http://www.apache.org/licenses/LICENSE-2.0                                |
  |                                                                           |
  | Unless required by applicable law or agreed to in writing, software       |
  | distributed under the License is distributed on an "AS IS" BASIS,         |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  |
  | See the License for the specific language governing permissions and       |
  | limitations under the License.                                            |
  +---------------------------------------------------------------------------+
  | Copyright (c) 2014, MongoDB, Inc.                                         |
  +---------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#	include "config.h"
#endif

/* External libs */
#include <bson.h>
#include <mongoc.h>

/* PHP Core stuff */
#include <php.h>
#include <php_ini.h>
#include <php/ext/standard/info.h>
#include <Zend/zend_interfaces.h>
#include <php/ext/spl/spl_iterators.h>
/* Our Compatability header */
#include "php_compat_53.h"

/* Our stuffz */
#include "php_phongo.h"
#include "php_bson.h"


PHPAPI zend_class_entry *php_phongo_commandcursor_ce;

/* {{{ proto MongoDB\Command\CommandCursor CommandCursor::__construct(MongoDB\Server $server, MongoDB\CursorId $cursorId, array $firstBatch)
   Constructs a new CommandCursor object */
PHP_METHOD(CommandCursor, __construct)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;
	zval                  *server;
	zval                  *cursorId;
	zval                  *firstBatch;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "OOa", &server, php_phongo_server_ce, &cursorId, php_phongo_cursorid_ce, &firstBatch) == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto MongoDB\CursorId CommandCursor::getId()
   Returns the CursorId */
PHP_METHOD(CommandCursor, getId)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto MongoDB\Server CommandCursor::getServer()
   Returns the Server object that this cursor is attached to */
PHP_METHOD(CommandCursor, getServer)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto boolean CommandCursor::isDead()
   Checks if a cursor is still alive */
PHP_METHOD(CommandCursor, isDead)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto boolean CommandCursor::setBatchSize(integer $batchSize)
   Sets a batch size for the cursor */
PHP_METHOD(CommandCursor, setBatchSize)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;
	long                   batchSize;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "l", &batchSize) == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto void CommandCursor::current()
    */
PHP_METHOD(CommandCursor, current)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto void CommandCursor::next()
    */
PHP_METHOD(CommandCursor, next)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto void CommandCursor::key()
    */
PHP_METHOD(CommandCursor, key)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto void CommandCursor::valid()
    */
PHP_METHOD(CommandCursor, valid)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto void CommandCursor::rewind()
    */
PHP_METHOD(CommandCursor, rewind)
{
	php_phongo_commandcursor_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_commandcursor_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */

/**
 * Cursor implementation that may be constructed from values found in a
 * CommandResult's response document.
 *
 * The iteration and internal logic is very similar to QueryCursor, so both
 * classes should likely share code. The first batch is comparable to the
 * documents found in the OP_REPLY message returned by a QueryCursor's original
 * OP_QUERY, in that both may be available at the time the cursor is
 * constructed.
 */
/* {{{ MongoDB\Command\CommandCursor */

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, server, MongoDB\\Server, 0)
	ZEND_ARG_OBJ_INFO(0, cursorId, MongoDB\\CursorId, 0)
	ZEND_ARG_ARRAY_INFO(0, firstBatch, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_getId, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_getServer, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_isDead, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_setBatchSize, 0, 0, 1)
	ZEND_ARG_INFO(0, batchSize) 
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_current, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_next, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_key, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_valid, 0, 0, 0)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_CommandCursor_rewind, 0, 0, 0)
ZEND_END_ARG_INFO();


static zend_function_entry php_phongo_commandcursor_me[] = {
	PHP_ME(CommandCursor, __construct, ai_CommandCursor___construct, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, getId, ai_CommandCursor_getId, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, getServer, ai_CommandCursor_getServer, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, isDead, ai_CommandCursor_isDead, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, setBatchSize, ai_CommandCursor_setBatchSize, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, current, ai_CommandCursor_current, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, next, ai_CommandCursor_next, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, key, ai_CommandCursor_key, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, valid, ai_CommandCursor_valid, ZEND_ACC_PUBLIC)
	PHP_ME(CommandCursor, rewind, ai_CommandCursor_rewind, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

/* }}} */


/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(CommandCursor)
{
	(void)type; /* We don't care if we are loaded via dl() or extension= */
	zend_class_entry ce;

	INIT_NS_CLASS_ENTRY(ce, "MongoDB\\Command", "CommandCursor", php_phongo_commandcursor_me);
	php_phongo_commandcursor_ce = zend_register_internal_class(&ce TSRMLS_CC);
	zend_class_implements(php_phongo_commandcursor_ce TSRMLS_CC, 1, php_phongo_cursor_ce);


	return SUCCESS;
}
/* }}} */



/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */