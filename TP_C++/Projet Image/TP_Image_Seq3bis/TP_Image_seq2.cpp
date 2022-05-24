
// TP_Image.cpp : définit le point d'entrée pour l'application console.
//

#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace std;
using namespace cv;

#include "Affiche_histo.h"

unsigned char *pixelsArray;
short nbCols, nbRows;

unsigned short histogramme[256];

int main()
{
	/********************************************************************/
	/* PARTIE A NE PAS MODIFIER						*********************/
	/********************************************************************/
	
	// Définition des variables spécifiques à Open CV
	Mat image;
	 
	// Chargement de l'image
	string Name;

	//cout << "Entrer le nom de l'image à traiter sous la forme ****.jpg:   "; cin >> Name;
	image = imread("passerelle_NG.jpg", 0);
		
	if (image.data == NULL)
	{
		cerr << "Impossible d'ouvrir l'image ! ";
		return -1;
	}

	// Utiliser dans le cadre de la séquence n°3
	Mat image_bin;						// Nouvelle instance de Mat pour éviter d'écraser l'histogramme source
	image_bin = image.clone();			// Clonage de l'image pour utilisation en traitement ponctuel
	//pixelsArrayTrait = &image_bin.data[0];	// Pointeur résultat de la binarisation

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
	cout << "Nombre de colones : " << nbCols;
	cout << endl;

	cout << "Nombre de lignes : " << nbRows;
	cout << endl;

	cout << "Taille de pixelsArray : " << nbCols * nbRows;
	cout << endl;

	//Utilisation de fonctions//
	void pixelVal(void);
	pixelVal();

	void pixelPos(int);

	/*int Pos;
	cout << "Entrer une position : "; 
	cin >> Pos;
	pixelPos(Pos);*/

	float pixelNGmoyen(void);
	float y;
	y = pixelNGmoyen();
	cout << "La valeur moyenne est " << y << endl;
	cout << endl;

	//histogramme//

	/*for (int i = 0; i < (nbCols * nbRows); i++)
		histogramme[pixelsArray[i]] = histogramme[pixelsArray[i]] + 1;

	for (int i = 0; i < 256; i++)
		cout << histogramme[i] << " ";

	cout << endl << endl;*/

	//Utilisation de fonction calcHisto//
	void calcHisto(void);
	int A = 0;

	calcHisto();
	cout << endl;

	AfficheHisto("passerelle_NG.jpg", "Affiche histo");

	//Affichage de la valeur de niveau de gris la plus représentée dans l'image à partir de l'histogramme//
	void pixelNGplusRep(void);

	pixelNGplusRep();

	waitKey(0);
	return 0;

	//histogramme à partir de l'organigramme//

}

void pixelVal(void)
{
	int i = 0;
	
	while (i < 10)
	{
		cout << "La valeur du pixel " << i << " est " << (int)pixelsArray[i] << endl;

		i = i + 1;
	}
}

void pixelPos(int Pos)
{
	cout << "La valeur du pixel à la position " << Pos << " est " << (int)pixelsArray[Pos] << endl;
}

float pixelNGmoyen(void)
{
	int i;
	float MOY;

	i = 0;
	MOY = 0;

	while (i < (nbCols * nbRows))
	{
		MOY = MOY + pixelsArray[i];

		i = i + 1;
	}
	MOY = MOY / (nbCols * nbRows);

	return MOY;
}

void calcHisto(void)
{
	for (int i = 0; i < (nbCols * nbRows); i++)
		histogramme[pixelsArray[i]] = histogramme[pixelsArray[i]] + 1;

	for (int i = 0; i < 256; i++)
		cout << histogramme[i] << " ";
}

void pixelNGplusRep(void)
{
	int ValdeGris;

	ValdeGris = 0;
	
	for (int i = 0; i < 256; i++)
	{
		if (ValdeGris < histogramme[i])
		{
			ValdeGris = histogramme[i];
		}
	}
	cout << ValdeGris;
}