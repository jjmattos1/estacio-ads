#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Estruturas de Decisao Encadeadas - Exemplo\n\n");
	
	float nota = 0;
	
	printf("Digite a sua nota: ");
	scanf("%f", &nota);
	printf("\n%.2f\n", nota);
	
	if ((nota < 0) || (nota > 10))
		printf("\nNota invalida!");
	else if (nota >= 5)
		printf("\nParabens, voce esta aprovado!");
		else
			printf("\nNao foi desssa vez, faca a prova novamente!");
	
	printf(" \n");	
	return 0;
}a aprovado!");
	//else
		//printf("\nNota invalida!");
	
	printf(" \n");	
	return 0;
}