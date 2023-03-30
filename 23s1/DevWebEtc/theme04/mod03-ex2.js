// final pratice 2 of third module
// console.log ('');
/*
2. Faça um programa em JavaScript que:

Solicite ao usuário que insira dois números inteiros positivos;

Utilize um vetor para armazenar esses dois números;

Verifique se os números inseridos são inteiros positivos. Caso contrário, solicite ao usuário para inseri-los novamente;

Divida os dois números inteiros positivos;

Imprima na tela o resultado da divisão.

Observações:Há mais de uma forma de desenvolver o programa. Logo, não há código certo ou errado.

Você pode utilizar funções JavaScript para melhor organizar o seu código. Inclusive, pode usar um pouco de recursividade.
*/
//
function fnCalc() {
    let num1 = document.getElementById("num1");
    let num2 = document.getElementById("num2");
    //
    if (`${num1.value}` < 0) {
      alert('O número 1 é negativo!');
    } else if (`${num2.value}` < 0) {
      alert('O número 2 é negativo!');
    } else {
      let numbersArray = [`${num1.value}`,`${num2.value}`];
    //console.log(numbersArray);
     let divResult = numbersArray[0] / numbersArray[1];
     alert('O resultado da divisão é: '+divResult);
    }
    //


}

