#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Entrada de dados - Exemplo 1\n\n");
	
	printf("Entre com a sua idade e a sua inicial abaixo. Tecle 'Enter' assim que terminar de digitar o 1o valor: ");
	int idade;
	char inicial;
	//printf(" \n");
	scanf("%d %c", &idade, &inicial);
	
	printf("\nSua idade e %d e sua inicial e %c", idade, inicial);
		
	return 0;
}