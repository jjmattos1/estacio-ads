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
	
	int repLine, repCol;
	int pairCount, oddCount;
	pairCount = oddCount = 0;
	
	int matP1[3][4] = {{0}};
	/*
	for ( repLine = 0 ; repLine < 3 ; repLine ++ )
		for ( repCol = 0 ; repCol < 4 ; repLine ++ )
			matP1[repLine][repCol] = 0;
	*/
	
	printf("Vetor e Matrizes - Matriz Pratica 1\n");
	printf("\nFaça um algoritmo que leia dados inteiros e armazene-os"
" em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares"
" armazenados na matriz.\n");
	
	for ( repLine = 0 ; repLine < 3 ; repLine ++ )
	{
		for ( repCol = 0 ; repCol < 4 ; repCol ++ )
		{
			printf("\nDigite o numero desejado da posicao [%d][%d] da matriz: ", repLine, repCol);
			scanf("%d", &matP1[repLine][repCol]);
			
			//code
			if ( matP1[repLine][repCol] % 2 == 0 )
			{
				pairCount ++;
				//
			}
			else
			{
				oddCount ++;
				//
			}
		}
		//repCol = 0;
	}
	
	printf("\nA quantidade de números pares é: %d\n", pairCount);
	printf("\nA quantidade de números ímpares é: %d\n", oddCount);
	
	printf(" \n");	
	return 0;
}	if ( matP1[repLine][repCol] % 2 == 0 )
			{
				pairCount ++;
				//
			}
			else
			{
				oddCount ++;
				//
			}
		}
		//repCol = 0;
	}
	
	printf("\nA quantidade de números pares é: %d\n", pairCount);
	printf("\nA quantidade de números ímpares é: %d\n", oddCount);
	
	printf(" \n");	
	return 0;
}return 0;
}