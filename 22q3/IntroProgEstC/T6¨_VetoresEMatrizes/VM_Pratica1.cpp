#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Vetores e Matrizes - Vetor, Pratica 1\n\n");
	
	int repStart = 0;//, vetSize;
	
	/* printf("Digite a quantidade desejada de números: ");
	scanf("%d", vetSize);
	
	int vetP1[vetSize]; */
	
	int vetSize = 4;
	
	int vetP1[vetSize];
	
	printf("\n");
	
	for ( repStart = 0; repStart < vetSize ; repStart ++)
	{
		printf("Digite o número da posição %d do vetor: ", repStart);
		scanf("%d", vetP1[vetSize]);
	}
	
	printf("\nPressione qualquer tecla para prosseguir com a exibição dos números invertidos:\n");
	system("pause");
	
	for ( repStart = vetSize ; repStart > vetSize ; repStart-- )
	{
		printf("Numero da posição %d do vetor é: %d", repStart, vetP1[repStart]);
	}
	
	printf("\n");
	
	return 0;
}