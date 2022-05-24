#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int z;
	int test;

	{z = 10;
	test = z++; }

	cout << "Afficher la valeur de z : " << z;
	cout << endl;
	cout << "Afficher la valeur de test : " << test;
	cout << endl;
	cout << endl;

	{z = 10;
	test = ++z; }

	cout << "Afficher la valeur de z : " << z;
	cout << endl;
	cout << "Afficher la valeur de test : " << test;
	cout << endl;
	cout << endl;

	{z = 10;
	test = z--; }

	cout << "Afficher la valeur de z : " << z;
	cout << endl;
	cout << "Afficher la valeur de test : " << test;
	cout << endl;
	cout << endl;

	{z = 10;
	test = --z; }

	cout << "Afficher la valeur de z : " << z;
	cout << endl;
	cout << "Afficher la valeur de test : " << test;
	cout << endl;


}