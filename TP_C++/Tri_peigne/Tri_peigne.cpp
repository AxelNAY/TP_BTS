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

	// Création d'un tableau avec valeurs aléatoires
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		Tab[i] = rand();
		cout << Tab[i] << endl;
	}

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

		while (i < (N-inter))
		{
			if (Tab[i] > Tab[i+inter])
			{
				memo = Tab[i];
				Tab[i] = Tab[i + inter];
				Tab[i + inter] = memo;
				echange == true;
			}
			i++;
		}
	} 

	// Tableau trié
	cout << "Tableau trié" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << Tab[i] << endl;
	}

	system("PAUSE");
}

