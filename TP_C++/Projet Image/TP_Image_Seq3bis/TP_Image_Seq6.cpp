// TP_Image.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

#include "Affiche_histo.h"

// D�claration des variables de travail
unsigned char *pixelsArray, *pixelsArrayTrait;
short nbCols, nbRows;

#define TAILLEHISTO 256
unsigned int histogramme[TAILLEHISTO];

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
	/* Nombre de pixels en longeur : variable nbRows       *************/
	cout << nbRows << endl << endl;
	/* Tableau des pixels organis� ligne par ligne : pixelsArray       */
	/*******************************************************************/

	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	//fonction extractContour
	void extractContour(void);
	extractContour();


	waitKey(0);
	return 0;
}

//D�finition des fonctions

void extractContour(void)
{

	unsigned char pixelsArray2DSrc[300][640];
	unsigned char pixelsArray2DDest[300][640];
	int i = 0;
	int col, lig = 0;

	int matConv[3][3] = { 0,-1,0,
						 -1,5,-1,
						 0,-1,0 };

	while (lig < 300)
	{
		col = 0;
		while (col < 640)
		{
			pixelsArray2DSrc[lig][col] = pixelsArray[i];
			cout << (int)pixelsArray2DSrc[lig][col] << " ; ";
			i = i + 1;
			col = col + 1;
		}
		cout << endl;
		i = i + 1;
		lig = lig + 1;
	}

	lig = 0;
	i = 0;

	while (lig < 300)
	{
		col = 0;
		while (col < 640)
		{
			pixelsArray2DDest[lig][col] = (pixelsArray2DSrc[lig - 1][col - 1] * matConv[0][0] + pixelsArray2DSrc[lig - 1][col] * matConv[0][1]
				+ pixelsArray2DSrc[lig - 1][col + 1] * matConv[0][2] + pixelsArray2DSrc[lig][col - 1] * matConv[1][0]
				+ pixelsArray2DSrc[lig][col] * matConv[1][1] + pixelsArray2DSrc[lig][col + 1] * matConv[1][2]
				+ pixelsArray2DSrc[lig + 1][col - 1] * matConv[2][0] + pixelsArray2DSrc[lig + 1][col] * matConv[2][1]
				+ pixelsArray2DSrc[lig + 1][col + 1] * matConv[2][2])/9;
			cout << (int)pixelsArray2DDest[lig][col] << " ; ";
			i = i + 1;
			col = col + 1;
		}
		cout << endl;
		i = i + 1;
		lig = lig + 1;
	}

}


