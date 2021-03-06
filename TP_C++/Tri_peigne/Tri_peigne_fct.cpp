// Tri_hol.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

using namespace std;

int main()
{
	const int N = 10;
	short Tab[N];
	short *p_Tab;
	p_Tab = &Tab[0];

	// Création d'un tableau avec valeurs aléatoires
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		*(p_Tab + i) = rand();
		cout << *(p_Tab + i) << endl;
	}

	short tri_peigne(short *p_Tab, int N);
	short nb;

	nb = tri_peigne(p_Tab, N);

	// Tableau trié
	cout << "Tableau trié" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << *(p_Tab + i) << endl;
	}

	cout << "Le nombre de valeur < 10000 est : " << nb << endl;

	system("PAUSE");
}

short tri_peigne(short *p_Tab, int N)
{
	int inter = N;
	bool echange = true;

	while ((inter > 1) || (echange == true))
	{
		inter = short(inter / 1.3);
		if (inter < 1)
		{
			inter = 1;
		}

		int i = 0;
		echange = false;
		short memo;

		while (i < (N - inter))
		{
			if (*(p_Tab + i) > *(p_Tab + i + inter))
			{
				memo = *(p_Tab + i);
				*(p_Tab + i) = *(p_Tab + i + inter);
				*(p_Tab + i + inter) = memo;
				echange == true;
			}
			i++;
		}

		short nbr = 0;
		for (i = 0; i < N; i++)
		{
			if (*(p_Tab + i) > 10000)
			{
				nbr++;
			}
		}


		return nbr;
	}
}

