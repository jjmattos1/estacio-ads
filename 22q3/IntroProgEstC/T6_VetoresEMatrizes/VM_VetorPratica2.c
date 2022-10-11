#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Vetores e Matrizes - Vetor, Pratica 2\n\n");
	printf("Armazenar a nota de 20 alunos e exibir apenas as quais estão acima da média da turma.\n\n");
	
	int repStart, vetSize, currentStud = 0;
	float scoreSum, typedScore, avg = 0.0;
			
		printf("Digite a quantidade de alunos desejada: ");
	scanf("%d", &vetSize);
	printf("\n");
	
	vetSize -= 1;
	float vetP2[vetSize], vetPosVar;
	for ( repStart = 0 ; repStart <= vetSize ; repStart ++ )
	{
		vetP2[repStart] = 0.0;
	}
	
	repStart = 0;
	
	for ( repStart = 0 ; repStart <= vetSize ; repStart ++ )
	{	
		currentStud = repStart + 1;
		printf("Digite a nota do %do aluno: ", currentStud);
		//vetPosVar = (float(repStart2));
		scanf("%f", &typedScore);
		
		vetP2[repStart] = typedScore;
		scoreSum += typedScore;
		typedScore = 0.0;
	}
	
	// cleaning variables content
	repStart, currentStud = 0;
	
	printf("\n");
	
	avg = scoreSum / vetSize;
	
	for ( repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			currentStud += repStart + 1;
			
			if ( (vetP2[repStart]) >= avg )
			{
				printf("\nO %do aluno esta acima da media: ", currentStud);
				printf(" ");
				printf("(media do aluno %f)\n.", (vetP2[repStart]));
				//eof if
			}
				else
				{
					printf("\nO aluno %d esta abaixo da media %f da turma.\n", currentStud, avg);
				}
		}
	
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