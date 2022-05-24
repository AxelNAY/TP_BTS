#include "pch.h"
#include "CMastermind.h"
#include "time.h"
#include <string>
#include <iostream>

using namespace std;

CMastermind::CMastermind()
{
	m_nb_essais = 0;
	m_nb_essaisMax = 8;
	m_taille_code = 6;
	m_fini = false;
}


CMastermind::~CMastermind()
{
}

CMastermind::CMastermind(int code, int nb_Essai)
{
	m_nb_essais = 0;
	m_nb_essaisMax = 0;
	m_taille_code = 0;
}


void CMastermind::usage()
{
	cout << "Regles du jeu : " << endl;
	cout << "Le programme choisie une série de 4 chiffres aleatoires allant de 0 a 9. Le but du joueur est de trouver les 4 chiffres de cette serie en ne disposant que de 6 essais" << endl;
	cout << "Si un chiffre du joueur est faux le programme n'affichera rien." << endl;
	cout << "Si un chiffre du joueur est correct mais a la mauvaise place le programme affichera 'x'." << endl;
	cout << "Si un chiffre du joueur est correct et a la bonne place le programme affichera 'v'." << endl;
	cout << "Le joueur gagne s'il obtient 4 'v' en moins de 6 essais." << endl;

}


void CMastermind::choisirSolution()
{	
	srand(time(NULL));
	int nombre;
	nombre = rand() % 999999 + 100000;
	m_secret = to_string(nombre);
	m_secret.resize(m_taille_code);
}


void CMastermind::saisirEssai(string code)
{
	m_essai = code;
	m_nb_essais++;
}


void CMastermind::verifierEssai()
{
	string memo;
	int i;
	int j;
	bool trouve;

	memo = m_secret;
	m_code = "      ";
	i = 0;
	while (i < m_taille_code)
	{
		trouve = false;
		j = 0;
		
		while ((j < m_taille_code) && (trouve == false))
		{
			if (m_essai[i] == memo[j])
			{
				if (i == j)
				{
					m_code[i] = 'v';
					memo[i] = ' ';
				}
				else
				{
					m_code[i] = 'x';
					memo[j] = ' ';
				}
				trouve = true;
				
			}
			j = j + 1;
	
		}
		i = i + 1;
	}

}


void CMastermind::afficherResultat()
{
	if (m_code == "vvvvvv")
	{
		cout << "Vous avez gagnez" << endl;
		cout << "Le code secret etait " << m_secret;
		m_fini = true;
	}
	else if ((m_nb_essais == m_nb_essaisMax) && (m_fini != true))
	{
		m_fini = true;
		m_nb_essais = 0;
		cout << "Manche finie - vous avez perdu" << endl;
		cout << "Le code secret etait " << m_secret;
	}
	else
	{
		//cout << "Entrez votre code :       ";
		cout << "                          " << m_code << endl;
		cout << "Incorrect il vous reste " << m_nb_essaisMax - m_nb_essais << endl;
		m_code = "      ";
	}
	
}

bool CMastermind::get_m_fini()
{
	return m_fini;
}

