// Exercice_code.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//code numéro 1
	/*struct coordo {
		int x;
		int y;
	};

	coordo Pts[30];
	float Distancemini = 100000000;
	int numeroPt;
	float distance;

	for (int i = 1; i < 30; i++)
	{
		distance = sqrt((Pts[0].x - Pts[i].x)(Pts[0].x - Pts[i].x) + (Pts[0].y - Pts[i].y)(Pts[0].y - Pts[i].y));
		if (distance < Distancemini)
		{

		}
	}*/
	//*****************************//

	//code n°2
	/*int multiplication(int n1, int n2);

	int x, y, z;

	x = 6;
	y = 35;

	z = multiplication(x, y);

	cout << "le resultat est " << z << endl;*/


	//code n°3
	/*int tab[8] = { 0, 1, 1, 0, 1, 0, 1, 1 };
	int nbr = 0;

	for (int i = 0; i < 8; i++)
	{
		nbr = nbr + tab[i]* pow(7 - i);
	}

	cout << "Le nombre decimal est " << nbr << endl;*/
	
	//code n°4
	/*void rendu(int nbr);
	int nbr = 33;
	rendu(nbr);*/

	//code n°5
	/*int recherche(char lettre, string mot);
	int nbrlettre;
	nbrlettre = recherche('e', "science");
	cout << "Le nombre est " << nbrlettre << endl;*/

	//code n°6
	int TAB[10] = { 1, 5, 2, 9, 8, 3, 9, 2, 9, 0 };
	int max = 0;
	int position = 999999999;
	int n = 0;

	for (int i = 0; i < 10; i++)
	{
		if (TAB[i] > max)
		{
			max = TAB[i];
			if (n == 0)
			{
				position = i;
				n = 1;
			}
		}
	}

	cout << "Le nombre maximal est " << max << " et sa premiere apparition est " << position << endl;


}

int multiplication(int n1, int n2)
{
	int i = 1;
	int n3 = n1;
	while (i < n2)
	{
		n3 = n3 + n1;
		i++;
	}
	return n3;
}

void rendu(int nbr)
{
	while (nbr >= 5)
	{
		nbr = nbr - 5;
		cout << "5" << endl;
	}
	while (nbr >= 2)
	{
		nbr = nbr - 2;
		cout << "2" << endl;
	}
	while (nbr >= 1)
	{
		nbr = nbr - 1;
		cout << "1" << endl;
	}
}

int recherche(char lettre, string mot)
{
	int nbrlettre = 0;
	for (int i = 0; mot[i] != 0x00; i++)
	{
		if (lettre == mot[i])
		{
			nbrlettre = nbrlettre + 1;
		}
	}
	return nbrlettre;
}

