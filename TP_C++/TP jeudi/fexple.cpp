// Appli_cours.cpp : définit le point d'entrée pour l'application console.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float fexple(float, int, int); // déclaration de fonction fexple

	float x = 1.5;
	float y;
	int n = 3, p = 5;

	/* appel de fexple avec les arguments x, n et p */
	
	fexple(x, n, p);

	y = fexple(x, n, p);

	cout << "valeur de y : " << y << "\n";

	return 0;
}


float fexple(float p1, int p2, int p3)
{
	float a;

	a = p2 * p1;
	p1 = pow(p1, 2);
	a = p1 + a + p3;

	return(a);
}


