<?php

/*
  Compares the predecessor with your antecessor between
  two arrays and verifies if it are equals or different.
*/

$numbers = [
            ["number" => 1],
            ["number" => 1],
            ["number" => 2],
            ["number" => 2],
            ["number" => 1],
            ["number" => 4],
            ["number" => 4]
          ];

$index = 1;
$last_index = count($numbers);

while ($index < $last_index) {
  $index = $index - 1;

  for ($x = 1; $x <= 2; $x++) {
      $number[] = $numbers[$index]['number'];
      $index++;
  }

  if ($number[0] === $number[1]) {
      echo $number[1].' is equal to '.$number[0];
  }
  else {
      echo $number[1].' is different to '.$number[0];
  }
  unset($number);
  echo '<br><br>';
}
