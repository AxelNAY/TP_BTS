// TP_Image.cpp : définit le point d'entrée pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

#include "Affiche_histo.h"

// Déclaration des variables de travail
unsigned char *pixelsArray;
short nbCols, nbRows;

#define TAILLEHISTO 256
unsigned int histogramme[TAILLEHISTO];

int main()
{
	/********************************************************************/
	/* PARTIE A NE PAS MODIFIER						*********************/
	/********************************************************************/	
	// Définition des variables spécifiques à Open CV
	Mat image;

	// Chargement de l'image
	image = imread("passerelle_NG.jpg", 0);
	
	if (image.data == NULL)
	{
		cerr << "Impossible d'ouvrir l'image ! ";
		return -1;
	}

	// Initialisation des variables de travail
	nbRows = image.rows;
	nbCols = image.cols;
	pixelsArray = &image.data[0];		// Adresse du 1er pixel de l'image en mémoire/ .data valeur du premier pixel 
		
	// Affichage de l'image
	namedWindow("TP Imagerie", WINDOW_AUTOSIZE);
	imshow("TP Imagerie", image);

	/*******************************************************************/
	/* PARTIE A COMPLETER						           *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	cout << nbCols << endl;
	/* Nombre de pixels en largeur : variable nbRows       *************/
	cout << nbRows << endl;
	/* Tableau des pixels organisé ligne par ligne : pixelsArray       */
	/*******************************************************************/
	
	// Calcul de l'histogramme
	void calcHisto(void);
	calcHisto();
	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	// Tri à bulles
	void triBulleHisto(void);

	triBulleHisto();

	// Tri par insertion


	waitKey(0);
	return 0;
}

// Définitions des fonctions
// Fonction Tri à bulles
void triBulleHisto(void)
{
	cout << endl;

	int nbPixMIN, i = 0, memPos, change;
	unsigned int histoTriBulle[TAILLEHISTO];
	int initPos = 0;

	for (i = 0; i < TAILLEHISTO; i++)
		histoTriBulle[i] = histogramme[i];

	do
	{
		nbPixMIN = nbRows * nbCols;
		i = initPos;

		do
		{
			if (histoTriBulle[i] < nbPixMIN)
			{
				nbPixMIN = histoTriBulle[i];
				memPos = i;
			}
			i++;
		} while (i < 256);

		change = histoTriBulle[memPos];
		histoTriBulle[memPos] = histoTriBulle[initPos];
		histoTriBulle[initPos] = change;
		initPos++;
	} while (initPos < 256);

	for (i = 0; i < 256; i++)
	{
		cout << "Les valeurs du tableau histoTriBulle[" << i << "] sont : " << histoTriBulle[i] << endl;
	}

}


// Fonction Tri par insertion




//Calcule et affiche le nombre de pixels pour un même NdG - histogramme 
void calcHisto(void)
{
	int i;

	cout << "Valeurs de l'histogramme" << endl;
	for (i = 0; i < (nbRows*nbCols); i++)
		histogramme[pixelsArray[i]]++;
	// Affichage
	for (i = 0; i < TAILLEHISTO; i++)
		cout << "histogramme[" << i << "] : " << histogramme[i] << endl;

	return;
}
