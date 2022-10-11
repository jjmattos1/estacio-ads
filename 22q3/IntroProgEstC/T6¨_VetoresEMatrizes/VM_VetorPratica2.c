#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Vetores e Matrizes - Vetor, Pratica 2\n\n");
	
	int repStart1, repStart2, repStart3, vetSize = 0;
			
		printf("Digite o tamanho do Vetor desejado: ");
	scanf("%d", &vetSize);
	printf("\n");
	
	vetSize -= 1;
	float vetP1[vetSize], vetPosVar;
	for ( repStart1 = 0 ; repStart1 <= vetSize ; repStart1 ++ )
	{
		vetP1[repStart1] = 0;
	}
	
	for ( repStart2 = 0 ; repStart2 <= vetSize ; repStart2 ++ )
	{	
		printf("Digite o numero desejado da posicao %d do Vetor: ", repStart2);
		vetPosFloat = (float(repStart2));
		scanf("%d", (&vetP1[vetPosFloat]));
	}
	
	printf("\n"););
	
	/*
	for ( repStart3 = vetSize ; repStart3 >= 0 ; repStart3 -- )
	{	
		printf("O numero da posicao %d do vetor e: ", repStart3);
		printf("%d", (vetP1[repStart3]));
		printf(" \n");
	}
	*/
		
	return 0;
}