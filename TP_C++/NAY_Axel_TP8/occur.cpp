#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Chaine;
	int A;
	int occur(char *p);
	

	cout << "Entrez une chaîne de caractères : ";
	cin >> Chaine;
	cout << endl;

	A = occur(&Chaine[0]);

	cout << "Il y a " << A << " dans " << Chaine << endl;

}

int occur(char *p)
{
	int n = 0;
	
	while (*p != '\0')
	{
		if (*p == 'a')
		{
			n = n + 1;
			p = p + 1;
		}
	}
	return n;
}


