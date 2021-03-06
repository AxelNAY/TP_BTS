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
	char *p_T;
	p_T= T;
	// p_T=&T[0];

	cout << "Tableau d'entrée : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << *(p_T + i) << " ";
		//cout << T[i];
	}
	cout << endl;

	// Q3: Codage de l'algorithme 
	int tri_hol(char *,int, int *, int *);
	int nvb;
	int nvblanc=0, nvr=0;
	nvb=tri_hol(p_T, N, &nvblanc , &nvr  );
	//nvb = tri_hol(T, N); // T = &T[0]
	   	
	// Q2: Affichage des valeurs du tableau d'entrée une fois trié
	cout << "Tableau d'entrée : " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << *(p_T + i) << " ";
	}
	cout << endl;

	cout << "Nombre de valeurs bleues = " << nvb << endl;
	cout << "Nombre de valeurs blanches = " << nvblanc << endl;
	cout << "Nombre de valeurs rouges = " << nvr << endl;

	system("PAUSE");
}

int tri_hol(char *p_T, int N, int *p_bl /*p_bl=&nvblanc*/, int *p_r)
{
	int b = 0;
	int w = 0;
	int r = N - 1;
	char memo;

	while (w <= r)
	{
		if (*(p_T + w) == 'W')
			w = w + 1;
		else if (*(p_T + w) == 'B')
		{
			memo = *(p_T + b);
			*(p_T + b) = *(p_T + w);
			*(p_T + w) = memo;

			b = b + 1;
			w = w + 1;
		}
		else
		{
			memo = *(p_T + w);
			*(p_T + w) = *(p_T + r);
			*(p_T + r) = memo;
			r = r - 1;
		}
	}

	int nvb=0 ;
	for (int i = 0; i < N; i++)
		if (*(p_T + i) == 'B')
			nvb++;

	for (int i = 0; i < N; i++)
		if (*(p_T + i) == 'W')
			(*p_bl)++;

	for (int i = 0; i < N; i++)
		if (*(p_T + i) == 'R')
			(*p_r)++;
	
	return nvb;
}