<?php

function fibonacci($n, $previous = 0, $evenValuedSum = 0)
{
    if ($n % 2 == 0) $evenValuedSum += $n;
    if ($n == 1) {
        return fibonacci($n + 1, 1);
    }

    if ($n > 4000000) return $evenValuedSum;

    return fibonacci($n + $previous, $n, $evenValuedSum);
}

