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
	int i = 0;
	char *p_T;
	
	p_T = &T[0];

	while (i < 10)
	{
		cout << *p_T << " ; ";
		p_T = p_T + 1;
	}
	cout << endl << endl;

	// Q3: Codage de l'algorithme 
	int b = 0;
	int w = 0;
	int r = N - 1;
	while (w <= r)
	{
		if (*(p_T + w) = 'W')
		{
			w = w + 1;
		}
		else if (*(p_T + w) = 'B')
		{
			i = *(p_T + w);
			*(p_T + w) = *(p_T + b);
			*(p_T + b) = i;
		}
		else
		{
			i = *(p_T + w);
			*(p_T + w) = *(p_T + r);
			*(p_T + r) = i;
			r = r - 1;
		}
	}
	
	// Q2: Affichage des valeurs du tableau d'entrée une fois trié
	i = 0;

	p_T = &T[0];

	while (i < 10)
	{
		cout << *p_T << " ; ";
		p_T = p_T + 1;
	}
	cout << endl << endl;

	//Q4
	int tri_hol(char, int);
	int y = 0;

	y = tri_hol(*p_T, N);

	cout << y << endl;

	system("PAUSE");
}

int tri_hol(char *p_T, int N)
{
	int i = 0;
	int j = 0;
	int n = 0;

	cout << "Tapez W (blanc), R (rouge) ou B (bleu) : ";
	cin >> j;
	cout << endl;

	while (i < 10)
	{
		if (*(p_T + i) = j)
		{
			n = n + 1;
		}
		i = i + 1;
	}

	return n;
}
