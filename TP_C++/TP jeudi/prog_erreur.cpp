#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double f(double, double);
	
	double u, v, w;

	cout << "Tapez la valeur de u : ";
	cin >> u;
	cout << endl;

	cout << "Tapez la valeur de v : ";
	cin >> v;
	cout << endl;

	f(u, v);

	w = f(u, v);

	cout << "Le résultat est " << w << endl;

	return 0;
}

double f(double x, double y)
{
	double a;

	x = pow(x, 2);
	y = pow(y, 2);
	a = x + y;

	return(a);
}