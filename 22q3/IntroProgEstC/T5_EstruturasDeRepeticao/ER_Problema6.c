#include <stdio.h>
#include <stdlib.h>

int pairSum, oddSum, repCurrent, repSize, repStart = 0;

int oddEven (repCurrent)
{
				if (repCurrent % 2 == 0)
			{
				pairSum += repCurrent;
				// printf(sprintf(pairSum, "%d",42));
			}
				else
				{
				//oddSum = 0;
				oddSum += repCurrent;
				// printf(sprintf(oddSum, "%d",42));
				}
}

int main ()
{
	printf("Estruturas de Repetição - Problema 6\n\n");
	
		
	printf("Digite a quantidade desejada números: ");
	scanf("%d", &repSize);
	
	printf("\nResolução do problema:\n");
	
	for ( repStart = 1 ; repStart <= repSize ; repStart ++)
	{
		printf("\nDigite um número: ");
		scanf("%d", &repCurrent);			
		// aaaa	
		oddEven(repCurrent)	;
	}		
		//printf(pairSum);
		//printf("\n");
	//printf(oddSum);
	
	printf(" \n");	
	
	printf("O somatrio dos números pares é: %d", pairSum);
	printf(" \n");
	printf("O somatrio dos números Ímpares é: %d", oddSum);
	
	return 0;
}