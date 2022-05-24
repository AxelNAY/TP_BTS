#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	short A;

	cout << "Affecter une valeur a A : ";
	cin >> A;
	cout << endl;

	A = ~A;

	cout << "Le complement a 1 de A est " << A;
	cout << endl;

	A = A + 1;

	cout << "Le complement a 2 de A est " << A;
	cout << endl;


}