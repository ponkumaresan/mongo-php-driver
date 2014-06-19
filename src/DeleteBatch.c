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


PHPAPI zend_class_entry *php_phongo_deletebatch_ce;

/* {{{ proto MongoDB\Write\DeleteBatch DeleteBatch::add(array|object $document)
   Adds a new operation to be executed */
PHP_METHOD(DeleteBatch, add)
{
	php_phongo_deletebatch_t *intern;
	zend_error_handling	error_handling;
	zval                  *document;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_deletebatch_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "A", &document) == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */
/* {{{ proto int DeleteBatch::count()
   Returns how many items have been added to this batch */
PHP_METHOD(DeleteBatch, count)
{
	php_phongo_deletebatch_t *intern;
	zend_error_handling	error_handling;

	(void)return_value; (void)return_value_ptr; (void)return_value_used; /* We don't use these */

	zend_replace_error_handling(EH_THROW, phongo_exception_from_phongo_domain(PHONGO_INVALID_ARGUMENT), &error_handling TSRMLS_CC);
	intern = (php_phongo_deletebatch_t *)zend_object_store_get_object(getThis() TSRMLS_CC);

	if (zend_parse_parameters_none() == FAILURE) {
		zend_restore_error_handling(&error_handling TSRMLS_CC);
		return;
	}
	zend_restore_error_handling(&error_handling TSRMLS_CC);
}
/* }}} */

/**
 * Aggregates a collection of delete operations, to be executed in batches.
 */
/* {{{ MongoDB\Write\DeleteBatch */

ZEND_BEGIN_ARG_INFO_EX(ai_DeleteBatch_add, 0, 0, 1)
	ZEND_ARG_INFO(0, document) 
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(ai_DeleteBatch_count, 0, 0, 0)
ZEND_END_ARG_INFO();


static zend_function_entry php_phongo_deletebatch_me[] = {
	PHP_ME(DeleteBatch, add, ai_DeleteBatch_add, ZEND_ACC_PUBLIC)
	PHP_ME(DeleteBatch, count, ai_DeleteBatch_count, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

/* }}} */


/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(DeleteBatch)
{
	(void)type; /* We don't care if we are loaded via dl() or extension= */
	zend_class_entry ce;

	INIT_NS_CLASS_ENTRY(ce, "MongoDB\\Write", "DeleteBatch", php_phongo_deletebatch_me);
	php_phongo_deletebatch_ce = zend_register_internal_class(&ce TSRMLS_CC);
	zend_class_implements(php_phongo_deletebatch_ce TSRMLS_CC, 1, php_phongo_writebatch_ce);


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