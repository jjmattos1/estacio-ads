#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Operador Ternario da linguagem C - Exemplo\n\n");
	
	int a, b, c, d, e;
	
	printf("Digite a variavel A(press. enter): ");
	scanf("%d", &a);
	printf("\nDigite a variavel B: ");
	scanf("%d", &b);
	
	//variavel C sera menor que a D. Criar algo com divisao e mult para essas variaveis.
	
	printf("\nCalculando variavel final 'e'...\n\n");
	
	c = (a * b) / a;
	d = (a * b) + c;
	e = (a > b) ? c : d;
	
	printf("Apos operacao ternaria, o valor de e fica: ");
	printf("%d", e);
	
	printf(" \n");	
	return 0;
}