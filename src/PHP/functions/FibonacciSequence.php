<?php

/*
  Fibonacci Sequence
*/

function fib_sequence($number) {
  $f1 = -1;
  $f2 = 1;
  $counter = 0;
  $numbers = [];

  while ($counter <= $number) {
    $f = $f1 + $f2;
    $numbers[$counter] = $f;

    $f1 = $f2;
    $f2 = $f;

    $counter++;
  }

  return $numbers;
}

var_dump(fib_sequence(20));
