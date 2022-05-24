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
unsigned char *pixelsArray, *pixelsArrayTrait;
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
	image = imread("passerelle_NG_contrast.jpg", 0);
	
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
	
	AfficheHisto("passerelle_NG_contrast.jpg", "Affiche histo contrast");
	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	//fonction nivMin
	int y;
	int nivMin(void);
	
	nivMin();
	y = nivMin();

	cout << "Le niveau minimum de gris est " << y << endl;

	AfficheHisto("passerelle_NG_contrast.jpg", "Affiche histo contrast");
	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	//fonction nivMax
	int z;
	int nivMax(void);
	
	nivMax();
	z = nivMax();

	cout << "Le niveau maximum de gris est " << z << endl;

	AfficheHisto("passerelle_NG_contrast.jpg", "Affiche histo contrast");
	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	//fonction augmenteContraste

	int *Min;
	Min = &y;

	int *Max;
	Max = &z;

	void augmenteContraste(void);
	
	augmenteContraste();

	AfficheHisto("passerelle_NG_contrast.jpg", "Affiche histo contrast");
	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	waitKey(0);
	return 0;
}



// Définitions des fonctions
int nivMin(void)
{
	int i;
	int Min = 255;

	for (i = 0; i < (nbCols * nbRows); i++)
	{
		if (Min > pixelsArray[i])
			Min = pixelsArray[i];
	}

	return Min;
}
	
int nivMax(void)
{
	int i;
	int Max = 0;

	for (i = 0; i < (nbCols * nbRows); i++)
	{
		if (Max < pixelsArray[i])
			Max = pixelsArray[i];
	}

	return Max;
}

void augmenteContraste(void)
{
	int i;
	int Min = 255;
	int Max = 0;
	
	for (i = 0; i < (nbCols * nbRows); i++)
	{
		if (Min > pixelsArray[i])
			Min = pixelsArray[i];

		if (Max < pixelsArray[i])
			Max = pixelsArray[i];
	}
	
	for (i = 0; i < (nbCols * nbRows); i++)
	{
		pixelsArrayTrait[i] = (255 / (Max - Min)) * (pixelsArray[i] - Min);
	}

}

