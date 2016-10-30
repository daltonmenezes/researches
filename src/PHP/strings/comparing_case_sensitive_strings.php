<?php

$text_one = 'HELLO WORLD';
$text_two = 'hello world';

if (strtolower($text_one) == strtolower($text_two)) {
    echo $text_one.' and '.$text_two.' has the same meaning.';
}
else {
    echo $text_one.' and '.$text_two.' doesn\'t has the same meaning.';
}
