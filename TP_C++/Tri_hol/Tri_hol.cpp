// Tri_hol.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N = 10;
	// bleu: 'B'	blanc: 'W'	rouge: 'R'	
	char T[] = { 'B', 'W', 'B', 'R', 'W', 'B', 'B', 'R', 'R', 'W' };

	// Q1: Affichage des valeurs du tableau d'entrée
	cout << "Tableau d'entrée : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << T[i] << " ";
	}
	cout << endl;

	// Q3: Codage de l'algorithme 
	int b = 0;
	int w = 0;
	int r = N - 1;
	char memo;

	// version tableau
	while (w <= r)
	{
		if (T[w] == 'W')
			w = w + 1;
		else if (T[w] == 'B')
		{
			memo = T[b];
			T[b] = T[w];
			T[w] = memo;
			b = b + 1;
			w = w + 1;
		}
		else
		{
			memo = T[w];
			T[w] = T[r];
			T[r] = memo;
			r = r - 1;
		}
	}
	
	// Q2: Affichage des valeurs du tableau d'entrée une fois trié
	cout << "Tableau de sortie trié : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << T[i] << " ";
	}
	cout << endl;

	system("PAUSE");
}

