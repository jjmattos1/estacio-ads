<?php

echo "Hello World!";
echo "<br></br><br></br>";
$num1 = 144;
$num2 = 10;
$result1 = $num1 ** $num2;
echo "O resultado de $num1 elevado a $num2 é $result1.\n\n";
//echo "\n\n";
echo "Teste pular linha com 1 'n'. ";
echo "Não funcionou no Android @ apache 2.4.55 e php 8.2.3";
die;
// PHP is like Javascript regarding the variable declaration, you dont define the variable types.
/*
The ** operator serves to exponentiate the second variable:
$test = 10 ** 2;
In this case the value of the test variable is 100.

Request variables:

$_GET = retrieve data
$_POST = send data
$_REQUEST = retrieve/send data. Less secure as Dr. Cople said.

Operators:
=== for comlaring the vakues of two variables, even if they are from a different type, eg: var 5 === var "5". They do have the same value, but they have a different type (int vs string).

!== uses the same logic as above for the same situation (comparing values from different type of variable), but denying because of the != logic

'and' and '&&' does the same thing!

*/
?>