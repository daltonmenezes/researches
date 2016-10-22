<?php

$first_number = 0;
$last_number = 10;

$numbers = range($first_number, $last_number);
rsort($numbers);

foreach ($numbers as $index => $value) {
  if ($index == $last_number) {
    echo $value;
  } 
  else {
    echo $value.' | ';
  }
}
