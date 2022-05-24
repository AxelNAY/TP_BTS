#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float xA;
	float xB;
	float yA;
	float yB;
	float d;
	float Dx, Dy;

	cout << "Entrer une valeur pour xA : ";
	cin >> xA;
	cout << endl;
	cout << "Entrer une valeur pour xB : ";
	cin >> xB;
	cout << endl;
	cout << "Entrer une valeur pour yA : ";
	cin >> yA;
	cout << endl;
	cout << "Entrer une valeur pour yB : ";
	cin >> yB;
	cout << endl;

	Dx = xB - xA;
	Dy = yB - yA;

	d = pow(Dx, 2); //d = Dx²
	d = d + pow(Dy, 2); //d = Dx² + Dy²
	d = sqrt(d);
	cout << d;
	cout << endl;

	system("PAUSE");
	return 0;




}
