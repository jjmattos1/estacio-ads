// needed libs for displaying international chars on Windows console
// https://github.com/Embarcadero/Dev-Cpp/issues/103
#define NOMINMAX // Define this before including windows.h
#include <windows.h>
#include <locale.h>
// uncomment the end-comment above to run this source on Windows (int chars)

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// code init for international chars
	// uncomment the start-comment below to run this source on Windows (int chars)
	setlocale(LC_ALL, ".UTF8");
	SetConsoleCP(CP_UTF8); // Input codepage (affects cin, scanf, etc.)
    SetConsoleOutputCP(CP_UTF8); // Output codepage (affects cout, printf, etc.)
    // code end for international chars
     // uncomment the end-comment above to run this source on Windows (int chars)
	
	int Acount, Ecount, Icount, Ocount, Ucount, repStart = 0;
	int vetSize = 4; int vetP3[vetSize];
	char letras = 'a';
	
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			vetP3[repStart] = 0;
		}
		
	repStart = 0;
	/*
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
	{
		printf("%d \n", (vetP3[repStart]));
	}
	*/	
	
	printf("Vetor e Matrizes - Pratica 3\n\n");
	printf("Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) aparecem.");
	
	while ( letras != 'z' )
	{
		printf("Digite a letra desejada e pressione enter: ")
		scanf("%s", (vetP3[letras]));
	}
	
	for (repStart = 0 ; repStart <= vetSize ; vetStart ++)
	{
		switch ((vetP3[repStart]))
		{
			case 'a':
						//code
						break;
			case 'e':
						//code
						break;
			case 'i':
						//code
						break;
			case 'o':
						//code
						break;
			case 'u':
						//code
						break;
			
		
		}
	}
	
	// system("pause");
	printf(" \n");	
	return 0;
}