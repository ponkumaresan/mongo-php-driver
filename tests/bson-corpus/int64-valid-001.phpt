--TEST--
Int64 type: MinValue
--XFAIL--
Depends on CDRIVER-1967
--DESCRIPTION--
Generated by scripts/convert-bson-corpus-tests.php

DO NOT EDIT THIS FILE
--FILE--
<?php

require_once __DIR__ . '/../utils/tools.php';

$bson = hex2bin('10000000126100000000000000008000');

// BSON to Canonical BSON
echo bin2hex(fromPHP(toPHP($bson))), "\n";

// BSON to Canonical extJSON
echo json_canonicalize(toJSON($bson)), "\n";

$json = '{"a" : {"$numberLong" : "-9223372036854775808"}}';

// extJSON to Canonical extJSON
echo json_canonicalize(toJSON(fromJSON($json))), "\n";

// extJSON to Canonical BSON
echo bin2hex(fromJSON($json)), "\n";

?>
===DONE===
<?php exit(0); ?>
--EXPECT--
10000000126100000000000000008000
{"a":{"$numberLong":"-9223372036854775808"}}
{"a":{"$numberLong":"-9223372036854775808"}}
10000000126100000000000000008000
===DONE===