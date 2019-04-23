<?php


$app_dir = rtrim($argv[1], '/');
$output_dir = './output';

if (!is_dir($app_dir)) {
    exit("App dir: " . $app_dir . " not exist!\n");
}
if (!is_dir($output_dir)) {
    mkdir($output_dir, 0744, 1);
}

$php_file_list = array();

scan_dir($app_dir);

print_r($app_dir);

foreach($php_file_list as $file){
    try{
        $data = gcompile($file);
        if (false === $data) {
            exit("Gcompile failed\n");
        }
        $out_file = str_replace($app_dir, $output_dir, $file);

        if (!is_dir(dirname($out_file))) {
            mkdir(dirname($out_file), 0744, 1);
        }
        
        file_put_contents($out_file, $data);
        
        echo "Gcompile: " . $file . " -> " . $out_file . " success\n";
    }catch(Throwable $e){
        echo "Gcompile error: " . $e->getMessage() . "\n";
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

