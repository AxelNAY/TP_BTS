#include "pch.h"
#include <iostream>
#include <winsock.h>
#include <mysql.h>
#include "Communication.h"
#include "CBdD.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	CBdD p1;
	bool OK;
	vector<string> Enregistrements;
	vector<string> :: iterator IT;
	OK = p1.connect();

	/*if (p1.connect() == false)
	{
		cout << "La connexion a echoue." << endl;
	}
	else
	{
		cout << "La connexion a reussi." << endl;
	
	}
	*/

	if (OK)
	{
		OK = p1.table("ZONE", Enregistrements);
		if (OK)
		{
			cout << "Liste des enregistrements de la table :" << endl << endl;
			for (IT = Enregistrements.begin(); IT!= Enregistrements.end(); ++IT)
			{
				cout << *IT << endl;
			}
		}
		else
		{
			cout << "!!! PB Recherche Enregistrements dans la table !!!" << endl;
		}
	}

	cout << endl;

	if (OK)
	{
		OK = p1.table("BADGE", Enregistrements);
		if (OK)
		{
			cout << "Liste des enregistrements de la table :" << endl << endl;
			for (IT = Enregistrements.begin(); IT != Enregistrements.end(); ++IT)
			{
				cout << *IT << endl;
			}
		}
		else
		{
			cout << "!!! PB Recherche Enregistrements dans la table !!!" << endl;
		}
	}

	cout << endl;

	if (OK)
	{
		OK = p1.table("HORAIRE", Enregistrements);
		if (OK)
		{
			cout << "Liste des enregistrements de la table :" << endl << endl;
			for (IT = Enregistrements.begin(); IT != Enregistrements.end(); ++IT)
			{
				cout << *IT << endl;
			}
		}
		else
		{
			cout << "!!! PB Recherche Enregistrements dans la table !!!" << endl;
		}
	}


	//p1.deconnect();
	
}
