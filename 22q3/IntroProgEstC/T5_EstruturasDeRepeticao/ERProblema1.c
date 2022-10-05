#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Estruturas de Repetição - Problema 1\n\n");
	
	int number, repNum = 0;
	int repStart = 1;
	
	printf("Digite o número de repetições desejadas: ");
	scanf("%d", &repNum);
	printf("\nDigite o numero desejado: ");
	scanf("%d", &number);
	
	printf("\nResolução do problema:\n");
	for ( repStart ; repStart <= repNum ; repStart ++)
	{
		printf("\nRepetição de número %d do número %d.\n", repStart, number);
		
		system("pause");
	}
	
	printf(" \n");	
	return 0;
}