// needed libs for displaying international chars on Windows console
// https://github.com/Embarcadero/Dev-Cpp/issues/103
/*
#define NOMINMAX // Define this before including windows.h
#include <windows.h>
#include <locale.h>
*/
// uncomment the end-comment above to run this source on Windows (int chars)

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
	
	int vetSize = 5;
	int vetP3[vetSize], repStart = 0;
	char letras = 'a';
	
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			vetP3[repStart] = 0;
		}
		
	repStart = 0;
	/*	
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			printf("%s ", vetP3);
			//printf("%c ", (vetP3[repStart]));
		}
	//	
	printf("\n\n");
	system("pause");
	printf("\n");
	/*
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
	{
		printf("%d \n", (vetP3[repStart]));
	}
	*/	
	
	printf("Vetor e Matrizes - Pratica 3\n\n");
	printf("Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) aparecem.\n");
	
	while ( letras != 'z' )
	{
		printf("\nDigite a letra desejada e pressione enter: ");
		scanf(" %c", &letras);		
	
		switch ( letras )
		{
			case 'a':
						vetP3[0]++;
						break;
			case 'e':
						vetP3[1]++;
						break;
			case 'i':
						vetP3[2]++;
						break;
			case 'o':
						vetP3[3]++;
						break;
			case 'u':
						vetP3[4]++;
						break;
		}
	}
	
	printf("\n\n");
	
	printf("A QTD da vogal A inserida foi de: %d\n", vetP3[0]);
	printf("A QTD da vogal E inserida foi de: %d\n", vetP3[1]);
	printf("A QTD da vogal I inserida foi de: %d\n", vetP3[2]);
	printf("A QTD da vogal O inserida foi de: %d\n", vetP3[3]);
	printf("A QTD da vogal U inserida foi de: %d\n", vetP3[4]);
	
	printf("\nEntrega do resultado acima em formato FOR:\n");
	
	for ( repStart = 0 ; repStart < vetSize ; repStart ++ )
	{
		printf("\nA quantidade de cada vogal é, em ordem (AEIOU): %d \n", (vetP3[repStart]));
	}
	
	// system("pause");
	printf(" \n");	
	return 0;
}("pause");
	printf(" \n");	
	return 0;
}return 0;
}vogal O inserida foi de: %d\n", Ocount);
	printf("A QTD da vogal U inserida foi de: %d\n", Ucount);
	
	// system("pause");
	printf(" \n");	
	return 0;
}