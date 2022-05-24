
// TP_Image.cpp : définit le point d'entrée pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace std;
using namespace cv;

unsigned char *pixelsArray;
short nbCols, nbRows;
unsigned int histogramme[256];

int main()
{
	/********************************************************************/
	/* PARTIE A NE PAS MODIFIER						*********************/
	/********************************************************************/
	
	// Définition des variables spécifiques à Open CV
	Mat image;
	 
	// Chargement de l'image
	image = imread("fleur.jpg", 0);
		
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
	/* PROJET: Début de zone de programmation ETUDIANT     *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	/* Nombre de pixels en largeur : variable nbRows       *************/
	/* Tableau des pixels organisé ligne par ligne : pixelsArray       */
	/*******************************************************************/
	
	// Question 2
	cout << nbCols << endl;
	cout << nbRows << endl;

	cout << nbRows * nbCols << endl << endl;
	// Question 3
	unsigned char pixelsArray2DSrc[300][324];
	unsigned char pixelsArray2DDest[300][324];
	int i = 0;
	int col, lig = 0;

	while (lig < 300)
	{
		col = 0;
		while (col < 324)
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

	int i = 0;
	while (i < 50)
	{
		cout << pixelsArray[2][i] << endl;
		i = i + 1;
	}

	// Question 42
	void calcHisto(void);
	void pixelMax(void);

	calcHisto();
	pixelMax();

	// Question 5



	waitKey(0);
	return 0;
}

// Définition des fonctions


// Codage de la fonction calcHisto
void calcHisto(void)
{
	for (int Ndg = 0; Ndg < 256; Ndg++)
	{
		for (int i = 0; i < (nbCols*nbRows); i++)
		{
			if (pixelsArray[i] == Ndg)
			{
				histogramme[Ndg] = histogramme[Ndg] + 1;
			}
		}
		cout << "Histogramme [" << Ndg << "] : " << histogramme[Ndg] << endl;
	}
}

//Codage de la fonction pixelMax
void pixelMax(void)
{

}



