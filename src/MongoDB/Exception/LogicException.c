/*
 * Copyright 2015-2017 MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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
#include <ext/standard/info.h>
#include <Zend/zend_interfaces.h>
#include <ext/spl/spl_iterators.h>
/* Our Compatability header */
#include "phongo_compat.h"

/* Our stuffz */
#include "php_phongo.h"
#include "php_bson.h"
#include <ext/spl/spl_exceptions.h>


PHONGO_API zend_class_entry *php_phongo_logicexception_ce;

/* {{{ MongoDB\Driver\LogicException */

static zend_function_entry php_phongo_logicexception_me[] = {
	PHP_FE_END
};

/* }}} */


/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(LogicException)
{
	zend_class_entry ce;
	(void)type;(void)module_number;

	INIT_NS_CLASS_ENTRY(ce, "MongoDB\\Driver\\Exception", "LogicException", php_phongo_logicexception_me);
#if PHP_VERSION_ID >= 70000
        php_phongo_logicexception_ce = zend_register_internal_class_ex(&ce, spl_ce_LogicException);
#else
	php_phongo_logicexception_ce = zend_register_internal_class_ex(&ce, spl_ce_LogicException, NULL TSRMLS_CC);
#endif
	zend_class_implements(php_phongo_logicexception_ce TSRMLS_CC, 1, php_phongo_exception_ce);

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
