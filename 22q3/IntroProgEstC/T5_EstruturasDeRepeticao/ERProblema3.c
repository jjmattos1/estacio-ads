#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Estruturas de Repetição - Problema 3\n\n");
	
	int repStart, repNum = 0;
	float typed, salaryBigg, avgCalc, avg, salarySum = 0.0;
	
	printf("Digite a quantidade desejada de salários a serem lidos: ");
	scanf("%d", &repNum);
	
	printf("\nResolução do problema:\n");
	for ( repStart = 1 ; repStart <= repNum ; repStart ++)
	{
		printf("\nDigite o %d° salário a ser lido: ", repStart);
		scanf("%f", &typed);
		
		if ( typed > salaryBigg )
			salaryBigg = typed;
		
		salarySum = salarySum + typed;
		
		system("pause");
	}
	
	printf("\nO maior salário é: %f", salaryBigg);
	
	//conv int to float... testar no Windows a conversao float(variavel), variavel sendo int, pois no copilador CxxDroid nao funcionou!
	
	avgCalc = repNum; //jeito que achei de usar o int como float!
	avg = salarySum / avgCalc;
	printf("\nA média salarial é de: R$ %f", avg);
	
	//printf("sqrt = %f", avgCalc);
	
	printf(" \n");	
	return 0;
}