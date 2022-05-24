
// TP_Image.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace std;
using namespace cv;

unsigned char *pixelsArray;
short nbCols, nbRows;

int main()
{
	/********************************************************************/
	/* PARTIE A NE PAS MODIFIER						*********************/
	/********************************************************************/
	
	// D�finition des variables sp�cifiques � Open CV
	Mat image;
	 
	// Chargement de l'image
	string Name;

	//cout << "Entrer le nom de l'image � traiter sous la forme ****.jpg:   "; cin >> Name;
	image = imread("passerelle_NG.jpg", 0);
		
	if (image.data == NULL)
	{
		cerr << "Impossible d'ouvrir l'image ! ";
		return -1;
	}

	// Utiliser dans le cadre de la s�quence n�3
	Mat image_bin;						// Nouvelle instance de Mat pour �viter d'�craser l'histogramme source
	image_bin = image.clone();			// Clonage de l'image pour utilisation en traitement ponctuel
	//pixelsArrayTrait = &image_bin.data[0];	// Pointeur r�sultat de la binarisation

	// Initialisation des variables de travail
	nbRows = image.rows;
	nbCols = image.cols;
	pixelsArray = &image.data[0];		// Adresse du 1er pixel de l'image en m�moire/ .data valeur du premier pixel 
		
	// Affichage de l'image
	namedWindow("TP Imagerie", WINDOW_AUTOSIZE);
	imshow("TP Imagerie", image);
	
	/*******************************************************************/
	/* PROJET: D�but de zone de programmation ETUDIANT     *************/
	/* Nombre de pixels en largeur : variable nbCols       *************/
	/* Nombre de pixels en largeur : variable nbRows       *************/
	/* Tableau des pixels organis� ligne par ligne : pixelsArray       */
	/*******************************************************************/
	

	waitKey(0);
	return 0;
}
