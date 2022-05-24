#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;
	int C;

	cout << "Entrer un nombre entier : ";
	cin >> A;
	cout << endl;

	cout << "Entrer un nombre entier : ";
	cin >> B;
	cout << endl;

	cout << "Entrer un nombre entier : ";
	cin >> C;
	cout << endl;

	if (A < C < B && B < C < A)
	{
		cout << "C est compris entre A et B";
		cout << endl;
	}
	else
	{
		cout << "C n'est pas compris entre A et B";
		cout << endl;
	}
}