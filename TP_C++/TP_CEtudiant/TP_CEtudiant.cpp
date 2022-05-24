// TP_CEtudiant.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "CEtudiant.h"

using namespace std;

int main()
{
	CEtudiant etudiant("NAY", "Axel");
	int note;
	int moy;
	int i = 0;

	while (i < 10)
	{
		cout << "Veuillez entrer une note : ";
		cin >> note;
		etudiant.saisie(note);
		i = i + 1;
	}
	

	etudiant.affichage();
	moy = etudiant.moyenne();
	cout << "La moyenne de l'etudiant est " << moy;
	
	etudiant.admis();

	CEtudiant etudiant2("CADOURET", "Michel");
	i = 0;
	while (i < 10)
	{
		cout << "Veuillez entrer une note : ";
		cin >> note;
		etudiant2.saisie(note);
		i = i + 1;
	}


	etudiant2.affichage();
	moy = etudiant2.moyenne();
	cout << "La moyenne de l'etudiant est " << moy;

	etudiant2.admis();

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
