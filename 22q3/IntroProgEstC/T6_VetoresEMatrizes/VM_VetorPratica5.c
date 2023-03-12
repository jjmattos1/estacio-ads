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
     
     // programacao incompleta 17/10/22.
     
     int repStart, vetSize, actualPos;
     repStart = vetSize1 = actualPos = 0;
	
	printf("Vetor e Matrizes - Pratica 5\n\n");
	
	printf("Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Na sequência, leia uma lista de 10 números"
	" inteiros e verifique se cada um deles está contido em alguma posição do vetor. "
	"Em caso positivo, mostre a posição do vetor em que ele se encontra.");
	
	// 1st vector sizing and init
	printf("Digite o tamanho do 1o vetor desejado: %d", &vetSize1);
	int vetP51[vetSize1];
	
	for ( repStart = 0 ; repStart <= vetSize1 ; repStart ++ )
	{
		vetP51[repStart] = 0;
	}
	
	repStart = 0;
	
	// 1st vector input
	for ( repStart = 0 ; repStart < vetSize1 ; repStart ++ )
	{
		printf("Digite o numero da posição %d do 1o vetor: ", repStart);
		scanf(&(vetP51[repStart]));
	}
	
	// 2nd vector init
	repStart = 0;
	int vetP52[10];
	
	for ( repStart = 0 ; repStart <= 10 ; repStart ++ )
	{
		vetP52[repStart] = 0;
	}
	
	// 2nd vector input
	for ( repStart = 0 ; repStart < 10 ; repStart ++ )
	{
		printf("Digite o numero da posição %d do 2o vetor: ", repStart);
		scanf(&(vetP52[repStart]));
	}
	
	// vectors compare
	
	
	
	
	printf(" \n");	
	return 0;
});	
	return 0;
}