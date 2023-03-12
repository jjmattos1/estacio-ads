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
	
	printf("Vetor e Matrizes - Matrizes Pratica 5\n\n");
	
	printf("Gerar/exibir uma matriz 5x5 de números 1, mas exibir o número zero na diagonal principal.\n\n");
	
	int repLine, repCol, matCol, matLine;
	//repLine = repCol = 0;
	matCol = matLine = 4;
	int matP5[4][4] = {{0}};
	
	for ( repLine = 0 ; repLine < matLine ; repLine ++ )
	{	
		for ( repCol = 0 ; repCol < matCol ; repCol ++ )
		{
			if ( repLine == repCol )
				matP5[repLine][repCol] = 0;
				else
					matP5[repLine][repCol] = 1;
			
			printf("%d	", matP5[repLine][repCol]);
		}
		printf("\n");
		
		printf("%d	", matP5[repLine][repCol]);
	}
	
	printf(" \n");	
	return 0;
}turn 0;
}