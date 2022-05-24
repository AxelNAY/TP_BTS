// C_Mastermind.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "CMastermind.h"
#include <string>

using namespace std;

int main()
{
	CMastermind Partie;
	string code;
	bool fini;
	Partie.usage();
	Partie.choisirSolution();

	do
	{
		cout << endl;
		cout << "Entrez votre code :       ";
		cin >> code;
		Partie.saisirEssai(code);
		Partie.verifierEssai();
		Partie.afficherResultat();
		fini = Partie.get_m_fini();
	} while (fini == false);

}

