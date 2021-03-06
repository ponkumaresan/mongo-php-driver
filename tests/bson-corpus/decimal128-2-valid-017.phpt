--TEST--
Decimal128: [decq125] Nmax and similar
--DESCRIPTION--
Generated by scripts/convert-bson-corpus-tests.php

DO NOT EDIT THIS FILE
--FILE--
<?php

require_once __DIR__ . '/../utils/tools.php';

$bson = hex2bin('18000000136400F2AF967ED05C82DE3297FF6FDE3CFEDF00');

// BSON to Canonical BSON
echo bin2hex(fromPHP(toPHP($bson))), "\n";

// BSON to Canonical extJSON
echo json_canonicalize(toJSON($bson)), "\n";

$json = '{"d" : {"$numberDecimal" : "-1.234567890123456789012345678901234E+6144"}}';

// extJSON to Canonical extJSON
echo json_canonicalize(toJSON(fromJSON($json))), "\n";

// extJSON to Canonical BSON
echo bin2hex(fromJSON($json)), "\n";

?>
===DONE===
<?php exit(0); ?>
--EXPECT--
18000000136400f2af967ed05c82de3297ff6fde3cfedf00
{"d":{"$numberDecimal":"-1.234567890123456789012345678901234E+6144"}}
{"d":{"$numberDecimal":"-1.234567890123456789012345678901234E+6144"}}
18000000136400f2af967ed05c82de3297ff6fde3cfedf00
===DONE===