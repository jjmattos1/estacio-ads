#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Ola Mundo!\n");
	
	int menu = 99;
	
	while (menu != 0)
	{
		system("cls");
		printf("Escolha o exercicio desejado:\n\n");
		printf("1 - CMD ES Pratica 1\n");
		printf("\n");
		printf("Digite 0 para sair.\n\n\n");
		printf("Opcao: ");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case 1:
				{
					char charEscolha;
					printf("\nDigite o caracter desejado:\n");
					scanf("%c",&charEscolha);
					charEscolha = charEscolha - 2;
					printf("\nA variavel escolha possui o valor: %c \n", charEscolha);
					system("pause");
					break;
				}
			case 2:
				{
					printf("Opcao 2\n");
					printf("Opcao 2\n");
					break;
				}
			case 0:
				{
					return 0;
				}
			default:
				printf("\nOpcao invalida!\n\n");
				break;
		}
	}
	
	return 0;
}