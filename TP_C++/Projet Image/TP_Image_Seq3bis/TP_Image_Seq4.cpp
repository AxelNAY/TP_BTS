// TP_Image.cpp : définit le point d'entrée pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

// Déclaration des variables de travail
unsigned char *pixelsArray, *pixelsArrayTrait;
short nbCols, nbRows;

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
		
	Mat image_new;						// Nouvelle instance de Mat 
	image_new = image.clone();			// Clonage de l'image 
	pixelsArrayTrait = &image_new.data[0];	// Création d’une nouvelle image 

	// Affichage de l'image
	namedWindow("TP Imagerie", WINDOW_AUTOSIZE);
	imshow("TP Imagerie", image);

	/*******************************************************************/
	/* PARTIE A COMPLETER						           *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	cout << nbCols << endl;
	/* Nombre de pixels en largeur : variable nbRows       *************/
	cout << nbRows << endl << endl;
	/* Tableau des pixels organisé ligne par ligne : pixelsArray       */
	/*******************************************************************/
	
	//fonction binarisation
	int S;
	void binarisation(unsigned int);
	S = 128;

	binarisation(S);

	namedWindow("TP Imagerie_New", WINDOW_AUTOSIZE);
	imshow("TP Imagerie_New", image_new);

	//fonction inverse
	void inverse(void);

	inverse();

	namedWindow("TP Imagerie_New", WINDOW_AUTOSIZE);
	imshow("TP Imagerie_New", image_new);



	waitKey(0);
	return 0;
}

// Définitions des fonctions

void binarisation(unsigned int B)
{
	int i = 0;
	
	while (i < (nbRows * nbCols))
	{
		if ((int)pixelsArrayTrait[i] < B)
		{
			pixelsArrayTrait[i] = 0;
		}

		if ((int)pixelsArrayTrait[i] > B)
		{
			pixelsArrayTrait[i] = 255;
		}
		i = i + 1;
	}
}

void inverse(void)
{
	int i = 0;

	while (i < (nbRows * nbCols))
	{
		pixelsArrayTrait[i] = 256 - pixelsArrayTrait[i];
		i = i + 1;
	}

}
