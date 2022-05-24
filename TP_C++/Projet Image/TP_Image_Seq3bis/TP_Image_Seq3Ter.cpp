// TP_Image.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

// D�claration des variables de travail
unsigned char *pixelsArray;
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
		
	// Affichage de l'image
	namedWindow("TP Imagerie", WINDOW_AUTOSIZE);
	imshow("TP Imagerie", image);

	/*******************************************************************/
	/* PARTIE A COMPLETER				       *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	cout << nbCols << endl;
	/* Nombre de pixels en largeur : variable nbRows       *************/
	cout << nbRows << endl;
	/* Tableau des pixels organis� ligne par ligne : pixelsArray       */
	/*******************************************************************/
	
	// Calcul de l'histogramme
	void calcHisto(void);
	calcHisto();

	// Tri par insertion - A compl�ter
	void trilnserHisto(void);
	trilnserHisto();

	waitKey(0);
	return 0;
}

// D�finitions des fonctions
// Fonction Tri par insertion - A compl�ter
void trilnserHisto(void)
{
	unsigned int histoTrilnser[TAILLEHISTO];
	int i, j, x;

	for (i = 0; i < TAILLEHISTO, i++)
		histoTrilnser[i] = histogramme[i];
		

	for (i = 1; i < 256; i++)
	{
		x = histoTrilnser[i];

		j = i;

		while ((j > 0) && (histoTrilnser[j - 1] > x))
		{
			histoTrilnser[j] = histoTrilnser[j - 1];
			j = j - 1;
		}
		histoTrilnser[j] = x;
		
		cout << histoTrilnser[j] << " ; " << endl;
	}

}



//Calcule et affiche le nombre de pixels pour un m�me NdG - histogramme 
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
