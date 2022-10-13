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
	
	int Acount, Ecount, Icount, Ocount, Ucount, repStart;
	Acount = Ecount = Icount = Ocount = Ucount = repStart = 0;
	int vetSize = 4; //int vetP3[vetSize];
	char letras = 'a'; char vetP3[vetSize];
	
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			vetP3[repStart] = 'a';
		}
		
	repStart = 0;
		
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
		{
			printf("%s ", vetP3);
			//printf("%c ", (vetP3[repStart]));
		}
		
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
		// armazenar entrada numa variavel para so depois repassar o valor da mesma para o vetor.
		// Senao o while ficara infinito!
		
		printf("\nDigite a letra desejada e pressione enter: ");
		scanf("%s", vetP3);
		//scanf("%s", (vetP3[letras]));
		
		
	}
	
	for (repStart = 0 ; repStart <= vetSize ; repStart ++)
	{
		switch ((vetP3[repStart]))
		{
			case 'a':
						Acount += 1;
						//code
						break;
			case 'e':
						Ecount += 1;
						//code
						break;
			case 'i':
						Icount += 1;
						//code
						break;
			case 'o':
						Ocount += 1;
						//code
						break;
			case 'u':
						Ucount += 1;
						//code
						break;
		}
	}
	
	printf("\n\n");
	
	printf("A QTD da vogal A inserida foi de: %d\n", Acount);
	printf("A QTD da vogal E inserida foi de: %d\n", Ecount);
	printf("A QTD da vogal I inserida foi de: %d\n", Icount);
	printf("A QTD da vogal O inserida foi de: %d\n", Ocount);
	printf("A QTD da vogal U inserida foi de: %d\n", Ucount);
	
	// system("pause");
	printf(" \n");	
	return 0;
}