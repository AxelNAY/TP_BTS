// Exemple_Erreur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.਍ഀ
//਍ഀ
਍ഀ
#include "pch.h"਍ഀ
#include <cmath>਍ഀ
਍ഀ
int main()਍ഀ
{਍ഀ
	int i, test, y;਍ഀ
	float x;਍ഀ
਍ഀ
	const int NFOIS = 5;਍ഀ
਍ഀ
	y = 4;਍ഀ
	5 = test;					// Affecte la valeur 5 à la variable test਍ഀ
	test + 5 = y - 2;			// Affecte la valeur y-2 à la variable test puis additionne 5 à test਍ഀ
਍ഀ
	cout << "Bonjour\n";		// Affiche Bonjour sur la console਍ഀ
	cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";਍ഀ
	for (i = 0; i < NFOIS; i++)਍ഀ
਍ഀ
		cout << "Donnez un nombre : ";਍ഀ
		cin > x;				// Acquisition au clavier d'une valeur pour x਍ഀ
		if (x < 0.0)਍ഀ
			cout << "La valeur de x est " << << "ne possede pas de racine carree\n ";਍ഀ
		else਍ഀ
		{਍ഀ
			racx = sqrt(x);		// le résulat de la fonction sqrt(x) est affecté à la variable flottante racx਍ഀ
			cout << "Le nombre " << x << " a pour racine carree : " << racx << "\n"਍ഀ
		}਍ഀ
਍ഀ
		cout << "Travail termine - au revoir "਍ഀ
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
