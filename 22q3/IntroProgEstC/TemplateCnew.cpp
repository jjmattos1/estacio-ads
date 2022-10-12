// needed libs for displaying international chars on Windows console
// https://github.com/Embarcadero/Dev-Cpp/issues/103
#define NOMINMAX // Define this before including windows.h
#include <windows.h>
#include <locale.h>
//

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// code init for international chars
	setlocale(LC_ALL, ".UTF8");
	
	SetConsoleCP(CP_UTF8); // Input codepage (affects cin, scanf, etc.)
    SetConsoleOutputCP(CP_UTF8); // Output codepage (affects cout, printf, etc.)
    // code end for international chars
	
	printf("Vetor e Matrizes - Pratica 3\n\n");
	
	printf("Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu, no emulador a seguir.");
	
	
	
	printf(" \n");	
	return 0;
}