#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i, j;
	void swap(int *p_i, int *t_j);

	cout << "Entrez un entier i : ";
	cin >> i;
	cout << endl;

	cout << "Entrez un entier j : ";
	cin >> j;
	cout << endl;

	//p_i = &i;
	//t_j = &j;
	swap(&i, &j);

	cout << i << endl;
	cout << j << endl;

	system("PAUSE");
}

void swap(int *p_i, int *t_j)
{
	int c;

	c = *p_i;
	*p_i = *t_j;
	*t_j = c;

}