// Appli_cours.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	void echange(int, int);

	int n = 10, p = 20;
	cout << "avant appel : " << n << " " << p << "\n";
	echange(n, p);
	cout << "apres appel : " << n << " " << p << "\n";

	return 0;
}

void echange(int a, int b)
{
	int c;
	cout << "d�but echange : " << a << " " << b << "\n";
	c = a;
	a = b;
	b = c;
	cout << "fin echange : " << a << " " << b << "\n";
}