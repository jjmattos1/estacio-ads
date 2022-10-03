#include <stdio.h>
//#include <conio.h>
/*
int main() {
	int numero;
	printf("Entre com um numero inteiro:\n");
	scanf("%d",&numero);
	printf("O valor informado pelo usuario foi: %d\n.", numero);
	return 0;
}
*/

int main () {
/*	float dividendo, divisor;
	printf("Entre com dois numeros reais: \n");
	scanf("%f %f", &dividendo, &divisor);
	printf("A divisao entre %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor); */
/* ***	
	char ch1;
	char ch2;
	printf("\n\nAgora, entre com duas letras: \n");
//	printf("manda duas letras \n\n");
//	scanf("%c %c", &ch1, &ch2);
	
	scanf(" %c", &ch1);
	scanf(" %c", &ch2); 

//	while ((ch1 = getchar()) != '\n' && ch1 != EOF) { }
//	scanf("%c", &ch1);
	//scanf("%c*[^\n]",&ch1);
	//fseek(stdin, 0, SEEK_END);
	//fflush(stdin) -- para limpar o buffer "do teclado", caso o SO seja Windows.
	//fpurge();
	//foi instruido em CMD ES mod3, na leitura de caracteres, de que se colocasse um espaco entre o inicio das " e a chamada de caracter na linha de captura do mesmo, exemplo: " %c", seria uma forma de contornar a entrada do valor da tecla enter. Mas no ambiente Android 12 usando o copilador Cxxdroid essa alternativa nao funcionou!
	
//	scanf("%c", &ch2);
	printf("As letras inseridas foram: %c e %c .\n",ch1, ch2); *** */ 

/*
int main (void) {
	char ch;
	do	{
		printf("ADS/22Q3/IPEC - Tema 3, Comandos de E/S.\n\n");
		printf("a) Exercicio 1\n");
		printf("b) Exercicio 2\n");
		printf("c) Exercicio 3\n");
		printf("\nPressione um caracter, q para sair: ");
		ch = getchar();
		//scanf("%c",&ch);
		printf("\n");
		switch (ch) { 
		case 'a':
			printf("\nHello World!\n\n");
		case 'b':
			printf("\nPrimeira linha.\n");
			printf("Segunda linha.\n\n");
		case  'c':
			printf("Opcao C");
			//break; (?)
		//'switch' end
		} 
		//'do' end'
	} while (ch != 'q');
	//
	return 0;
}


while

scanf
if else

fazer menu de escolhasusando if else depois
*/

//CMD ES Pratica 1

	char inicial;
	int idade;
	printf("Entre com a sua idade e sua inicial: \n");
	scanf("%d %c", &idade, &inicial);
	printf("Voce tem %d anos e sua inicial e %c.", idade, inicial);
	
}