// struct_boucle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.਍ഀ
//਍ഀ
਍ഀ
#include "pch.h"਍ഀ
#include <iostream>਍ഀ
਍ഀ
using namespace std;਍ഀ
਍ഀ
int main()਍ഀ
{਍ഀ
	int N, CPT;਍ഀ
਍ഀ
	cout << "Veuillez saisir un chiffre N = ";਍ഀ
	cin >> N;਍ഀ
	cout << endl;਍ഀ
	// Q1਍ഀ
	CPT = 0;਍ഀ
਍ഀ
	while (CPT <= N)਍ഀ
	{਍ഀ
		cout << "valeur paire : " << CPT << endl;਍ഀ
		CPT = CPT + 2;਍ഀ
	}਍ഀ
਍ഀ
	//Q2਍ഀ
	CPT = 0;਍ഀ
	do਍ഀ
	{਍ഀ
		cout << "valeur paire : " << CPT << endl;਍ഀ
		CPT = CPT + 2;਍ഀ
਍ഀ
	} while (CPT <= N);਍ഀ
਍ഀ
਍ഀ
਍ഀ
	//Q3਍ഀ
	for (CPT = 0; CPT <= N; CPT = CPT + 2)਍ഀ
	{਍ഀ
		cout << "valeur paire : " << CPT << endl;਍ഀ
	}਍ഀ
਍ഀ
਍ഀ
਍ഀ
	//Q4਍ഀ
	CPT = 0;਍ഀ
	while (CPT <= N && N != 5)਍ഀ
	{਍ഀ
		cout << "valeur paire : " << CPT << endl;਍ഀ
		CPT = CPT + 2;਍ഀ
	}਍ഀ
਍ഀ
}਍ഀ
਍ഀ
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage਍ഀ
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage਍ഀ
਍ഀ
// Conseils pour bien démarrer : ਍ഀ
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.਍ഀ
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.਍ഀ
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.਍ഀ
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.਍ഀ
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.਍ഀ
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.਍ഀ
