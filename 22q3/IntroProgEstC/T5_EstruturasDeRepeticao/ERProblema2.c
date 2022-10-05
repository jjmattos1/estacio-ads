#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Estruturas de Repetição - Problema 2\n\n");
	
	int number, repStart, repNum, typed, bigger = 0;
	
	printf("Digite a quantidade desejada de números a serem lidos:  ");
	scanf("%d", &repNum);
	
	printf("\nResolução do problema:\n");
	for ( repStart = 1 ; repStart <= repNum ; repStart ++)
	{
		printf("\nDigite o %do número a ser lido: ", repStart);
		scanf("%d", &typed);
		if ( typed > bigger )
			bigger = typed;
		
		system("pause");
	}
	
	printf("\nO maior número é: %d", bigger);
	
	printf(" \n");	
	return 0;
}