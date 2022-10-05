#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Estruturas de Decisao - Exemplo 2\n\n");
	
	float nota = -1;
	
	printf("Digite a sua nota: ");
	scanf("%f", &nota);
	
	if (nota >= 5)
		printf("\nParabens, voce esta aprovado!");
		if (nota < 5)
			printf("\nNao foi desssa vez, faca a prova novamente!");
	
	printf(" \n");	
	return 0;
}