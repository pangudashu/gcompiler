<?php

$arr = array( 1, 3, "name" => "pgqin", -1 => false, -3 => array(1.24));

$a = "hi~";

$c = true;

$b = &$a;

$a = $a . time();

include "user//dd.php";
include "/home//dd.php";

echo $b, $a;
