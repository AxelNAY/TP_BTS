#include "pch.h"
#include "CEtudiant.h"
#include <string>
#include <iostream>

using namespace std;

CEtudiant::CEtudiant()
{
	m_i = 0;
	m_moyenne = 0;
}


CEtudiant::~CEtudiant()
{
	m_i = 0;
	m_moyenne = 0;
}

CEtudiant::CEtudiant(string nom, string prenom)
{
	m_nom = nom;
	m_prenom = prenom;
	m_i = 0;
	m_moyenne = 0;
}


void CEtudiant::affichage()
{
	cout << "Les notes de l'etudiant " << m_prenom << " " << m_nom << " sont : " << endl;
	m_i = 0;
	while (m_i < 10)
	{
		cout << m_notes[m_i] << " sur 20" << endl;
		m_i = m_i + 1;
	}
}


void CEtudiant::saisie(int note)
{
	m_notes[m_i] = note;
	m_i = m_i + 1;
}


int CEtudiant::moyenne()
{
	m_i = 0;
	
	while (m_i < 10)
	{
		m_moyenne = m_notes[m_i] + m_moyenne;
		m_i = m_i + 1;
	}

	m_moyenne = m_moyenne / 10;

	return m_moyenne;
}


bool CEtudiant::admis()
{
	bool admis;
	if (m_moyenne < 10)
	{
		admis = false;
		cout << "L'etudiant " << m_prenom << " " << m_nom << " n'est pas admis." << endl;
	}
	else
	{
		admis = true;
		cout << "L'etudiant " << m_prenom << " " << m_nom << " est admis." << endl;
	}
	return bool();
	m_i = 0;
}
