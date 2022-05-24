#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned short a, b, c;

	a = 0xFF00;
	b = 0x00FF;
	
	cout << "La valeur de a est " << hex << a;
	cout << endl;
	cout << "La valeur de b est " << hex << b;
	cout << endl;
	
	c = a & b;

	cout << "ET logique : " << hex << c;
	cout << endl;

	c = a | b;

	cout << "OU logique : " << hex << c;
	cout << endl;

	c = a ^ b;

	cout << "OU exclusif : " << hex << c;
	cout << endl;


}