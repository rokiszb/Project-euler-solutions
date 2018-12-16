<?php

$i = 999;
$x = 999;
$palindromes = [];

for ($i; $i > 100; $i--) {
    // echo $x . '*' . $i . PHP_EOL;
    $product = $x * $i;
    $backwards = strrev($product);
    // echo ($product . 'reverse =>' . $backwards);
    if ($product == $backwards) {
        $palindromes[] = $product;
    }

    for ($x; $x > 100; $x--) {
        $productX = $x * $i;
        $backwardsX = strrev($productX);
    // echo ($product . 'reverse =>' . $backwards);
        if ($productX == $backwardsX) {
            $palindromes[] = $productX;
        }
    }
    $x = 999;
}

echo max($palindromes);