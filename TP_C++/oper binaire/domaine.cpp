#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	short test0;
	short test1;

	test0 = 32766;

	test1 = test0 + 1;
	cout << test1;
	cout << endl;
	test1 = test0 + 2;
	cout << test1;
	cout << endl;
	test1 = test0 + 3;
	cout << test1;
	cout << endl;


}