// oper_binaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.਍ഀ
//਍ഀ

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int A;
	unsigned int B;
	unsigned int C;
	unsigned int D;

	cout << "Entrer un entier : ";
	cin >> A;
	cout << endl;

	B = A << 1;

	cout << "La valeur de l'entier apres un decalage est " << B;
	cout << endl;

	C = B << 1;

	cout << "La valeur de l'entier apres 2 décalages est " << C;
	cout << endl;

	D = C << 1;

	cout << "La valeur de l'entier apres 3 décalages est " << D;
	cout << endl;



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
