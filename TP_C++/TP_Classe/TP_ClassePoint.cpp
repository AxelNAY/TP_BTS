// TP_Classe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include "CPoint.h"
#include <iostream>

using namespace std;

int main()
{
	CPoint p1;
	p1.initialise(2,5);
	p1.affiche();
	p1.deplace(2,4);
	p1.affiche();
	p1.setm_x(10);
	p1.affiche();

	int x;
	x = p1.getm_x();
	cout << "La valeur de m_x est " << x << endl;

	CPoint p2;
	p2.initialise(-2,7);
	p2.affiche();
	
	CPoint p3(1,1);
	p3.affiche();
	p3.deplace(-5,8);
	p3.affiche();
	p3.setm_x(5);


	system("PAUSE");
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
