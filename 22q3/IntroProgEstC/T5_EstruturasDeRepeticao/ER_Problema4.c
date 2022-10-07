#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Estruturas de Repetição - Problema 4\n\n");
	
	int repStartStudent, repStartScore,repNumStudent = 0;
	int repNumScore = 3;
	float typedScore, avg, scoreSum = 0.0;
	//bool aprovado;
	
	printf("Digite a quantidade desejada de alunos a serem computados: ");
	scanf("%d", &repNumStudent);
	
	printf("\nResolução do problema:\n");
	
	for ( repStartStudent = 1 ; repStartStudent <= repNumStudent ; repStartStudent ++)
	{
		printf("\nProcessando notas do aluno %d... ", repStartStudent);
		printf("\n");
	
		for ( repStartScore = 1 ; repStartScore <= repNumScore ; repStartScore ++)
			{
				printf("\nDigite a %da nota do aluno atual: ", repStartScore);
				scanf("%f", &typedScore);
				
				scoreSum = scoreSum + typedScore;
				//eofor
			}
			
			avg = scoreSum / 3;
			
			if ( avg >= 7.0 )
			{
				printf("\nO aluno atual está aprovado! (média %.2f)", avg);
			}
				else
				{
					printf("\nO aluno atual está reprovado! (média %.2f)", avg);
				}
				
				scoreSum = 0.0;
			
			printf("\n");
	}
		
	printf(" \n");	
	
	return 0;
	
}nt to float... testar no Windows a conversao float(variavel), variavel sendo int, pois no copilador CxxDroid nao funcionou!
	
	//avgCalc = repNum; //jeito que achei de usar o int como float!
	//avg = salarySum / avgCalc;
	//printf("\nA média salarial é de: R$ %f", avg);
	
	//printf("sqrt = %f", avgCalc);
	
	printf(" \n");	
	return 0;
}