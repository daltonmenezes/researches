<?php

/*
  Fibonacci Sequence
*/

function fib_sequence($number) {
  $f1 = -1;
  $f2 = 1;
  $counter = 0;

  while ($counter <= $number) {
    $f = $f1 + $f2;
    echo $f.' | ';

    $f1 = $f2;
    $f2 = $f;

    $counter++;
  }
}

echo fib_sequence(20);
