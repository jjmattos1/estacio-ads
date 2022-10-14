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
	
	printf("Vetor e Matrizes - Pratica 3\n\n");
	
	printf("Template: ç ~ ã.");
	
	
	
	printf(" \n");	
	return 0;
}