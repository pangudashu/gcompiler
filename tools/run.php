<?php

define('TEST_CONST', 123);

$php_file_list = array();

scan_dir($argv[1]);

foreach($php_file_list as $file){
    try{
        gcompile($file);
    }catch(Throwable $e){
        echo "Gcompile error:",$e->getMessage(),"\n";
    }
}

function scan_dir($dir)
{
    global $php_file_list;

    $mydir = dir($dir); 

    while($file = $mydir->read()) {
        if ($file == '.' || $file == '..') {
            continue;
        }
        if (is_dir($dir . '/' . $file)) {
            scan_dir($dir . '/' . $file);
        } else {
            $php_file_list[] = $dir . '/' . $file;
        }
    } 

    $mydir->close(); 
}

