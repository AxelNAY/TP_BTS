// TP_Image.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

// D�claration des variables de travail
unsigned char *pixelsArray, *pixelsArrayTrait;
short nbCols, nbRows;

int main()
{
	/********************************************************************/
	/* PARTIE A NE PAS MODIFIER						*********************/
	/********************************************************************/	
	// D�finition des variables sp�cifiques � Open CV
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
	pixelsArray = &image.data[0];		// Adresse du 1er pixel de l'image en m�moire/ .data valeur du premier pixel 
		
	Mat image_new;						// Nouvelle instance de Mat 
	image_new = image.clone();			// Clonage de l'image 
	pixelsArrayTrait = &image_new.data[0];	// Cr�ation d�une nouvelle image 

	// Affichage de l'image
	namedWindow("TP Imagerie", WINDOW_AUTOSIZE);
	imshow("TP Imagerie", image);

	/*******************************************************************/
	/* PARTIE A COMPLETER						           *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	cout << nbCols << endl;
	/* Nombre de pixels en largeur : variable nbRows       *************/
	cout << nbRows << endl << endl;
	/* Tableau des pixels organis� ligne par ligne : pixelsArray       */
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

// D�finitions des fonctions

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
