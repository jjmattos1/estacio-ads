// needed libs for displaying international chars on Windows console
// https://github.com/Embarcadero/Dev-Cpp/issues/103
/*
#define NOMINMAX // Define this before including windows.h
#include <windows.h>
#include <locale.h>
*/
// eofneeded

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// code init for international chars
	// uncomment the start-comment below to run this source on Windows (int chars)
		/* 
	setlocale(LC_ALL, ".UTF8");
	SetConsoleCP(CP_UTF8); // Input codepage (affects cin, scanf, etc.)
    SetConsoleOutputCP(CP_UTF8); // Output codepage (affects cout, printf, etc.)
    // code end for international chars
    	*/
     // uncomment the end-comment above to run this source on Windows (int chars)
	
	//int vet1Size = 5;
	
	int vetSize, repStart1, mod1;
	vetSize = repStart1 = mod1 = 0;
	
	printf("Vetor e Matrizes - Pratica 4\n\n");
	printf("Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números"
	" inteiros de cada\n elemento do primeiro, observando as seguintes regras.\n"
	"Conferir regras localizacao em questao na dada materia online.\n\n");
	printf("Digite o tamanho do vetor desejado: ");
	scanf("%d", &vetSize);
	printf("\n\n");
	
		// create vectors and init them	
	int vetP41[vetSize], vetP42[vetSize];
	for ( repStart1 = 0 ; repStart1 < vetSize ; repStart1 ++ )
		vetP41[repStart1] = vetP42[repStart1] = 0;
	
	repStart1 = 0;
	
	// store numbers in vector1 and apply the required rules to stote them on vector2
	for ( repStart1 = 0; repStart1 < vetSize ; repStart1 ++ )
	{
		printf("Digite o número desejado no vetor 1, posição %d: ", repStart1 );
		 scanf("%d", &(vetP41[repStart1]));
		 
		 if ( (vetP41[repStart1]) % 2 == 0 )
		 {
		 	mod1 = (vetP41[repStart1]);
		 	mod1 += 1;
		 	(vetP42[repStart1]) = mod1;
		 }
		  else
		 {
		 	mod1 = (vetP41[repStart1]);
		 	mod1 -= 1;
		 	(vetP42[repStart1]) = mod1;
		 }
		 
		 
	//eoformain	 
	}
	
	printf("Segue abaixo o conteudo dos vetores 1 e 2.\n");
	printf("Vetor 1	|	Vetor 2\n\n");
	
	repStart1 = 0;
	
	for ( repStart1 ; repStart1 < vetSize ; repStart1 ++ )
	{
		printf("%d", vetP41[repStart1] );
		printf("	|	");
		printf("%d\n", vetP42[repStart1] );
		
	}
	
	printf(" \n");	
	return 0;
}