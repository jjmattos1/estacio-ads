#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("Estruturas de decisao - Switch Exemplo 1\n\n");
	int op = -1;
	
	while (op != 0 )
	{
		system("cls");
		printf("Selecione a opcao desejada:\n\n");
		printf("1 - Inserir novo cliente.\n");
		printf("2 - Consultar cliente por CPF.\n");
		printf("3 - Cobsultar cliente por nome.\n");
		printf("4 - Remover cliente da base de clientes.\n");
		printf("\nDigite 0 para sair.\n");
		printf("\nEscolha uma opcao: ");
		scanf("%d", &op);
		
		switch (op) {
			case 1: {
				printf("\nVamos... inserir?\n\n");
				system("pause");
			}
				break;
			case 2: {
				printf("\nVamos... consultar CPF?\n\n");
				system("pause");
			}
				break;
			case 3: {
				printf("\nVamos... consutar nome?\n\n");
				system("pause");
			}
				break;
			case 4: {
				printf("\nVamos... remover cliente?\n\n");
				system("pause");
			}
				break;
			default: {
				printf("\nVamos... sair do sistema?\n\n");
				system("pause");
			}
				break;
		}
	}
	printf(" \n");	
	return 0;
}