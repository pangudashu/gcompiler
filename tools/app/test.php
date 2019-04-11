<?php

$arr = array( 1, 3, "name" => "pgqin", -1 => false, -3 => array(1.24));

$a = "hi~";

$b = &$a;

$a = $a . time();


echo $b, $a;
