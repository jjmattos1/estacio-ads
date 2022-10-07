#include <stdio.h>
#include <stdlib.h>

// function to concatenate ints and strings, found on: https://stackoverflow.com/questions/12700497/how-to-concatenate-two-integers-in-c
unsigned concatenate(unsigned x, unsigned y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;        
}

int main ()
{
	printf("Estruturas de Repetição - Problema 5\n\n");
	// nothing to document because this console app purpose is already know in the Loop exercices.
	
	int repStartEmployee, repStartScore,repNumEmployee = 0;
	int repNumScore = 3;
	float salaryPPlus, salary, newSalary, biggestSalary, multiPart1, newRaisePerc = 0.0;
	
	printf("Digite o percentual do aumento dos salarios: ");
	scanf("%f", &salaryPPlus); 
	
	//concatenate the desired percentage and store it in a way to calculate the new salary!
	multiPart1 = 1.0; 
	newRaisePerc = concatenate(multiPart1, salaryPPlus);
	newRaisePerc = newRaisePerc/100;
	
	printf("\nDigite a quantidade desejada de funcionarios a terem\n");
	printf("o salário reajustado: ");
	scanf("%d", &repNumEmployee);
	
	printf("\nResolução do problema:\n");
	
	for ( repStartEmployee = 1 ; repStartEmployee <= repNumEmployee ; repStartEmployee ++)
	{
		printf("\nProcessando reajuste de salario do funcionário %d... ", repStartEmployee);
		printf("\n");
		
		printf("\nDigite o salario atual do dado funcionário: ");
		printf("R$ ");
		scanf("%f", &salary);
		
		newSalary = salary * newRaisePerc;
		
		if ( newSalary > biggestSalary )
			biggestSalary = newSalary;
			
			printf("\nO salário reajustado é de R$ %.2f... ", newSalary);
			
			printf(" \n");
	}	
	
	return 0;
	
}