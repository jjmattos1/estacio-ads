#include <stdio.h>

int main ()
{
	printf("CMD ES - Pratica 1\n");
	char charEscolha;
	printf("\nDigite o caracter desejado: ");
	scanf("%c",&charEscolha);
	charEscolha = charEscolha + 1;
	printf("\nA variavel escolha possui o valor: %c \n", charEscolha);
	
	return 0;
}