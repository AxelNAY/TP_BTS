#include "pch.h"
#include "CCptBanc.h"
#include <iostream>
#include <string>

using namespace std;

CCptBanc::CCptBanc()
{
	m_solde = 500;
	m_Nom_Titulaire = "SN1IR";
}


CCptBanc::~CCptBanc()
{
}

CCptBanc::CCptBanc(string Nom, float Somme)
{
	m_solde = Somme;
	m_Nom_Titulaire = Nom;
}

void CCptBanc::depot(float Somme)
{
	m_solde = m_solde + Somme;
}


float CCptBanc::retrait(float Somme)
{
	m_solde = m_solde - Somme;

	if (m_solde < 0)
	{
		m_solde = 0;
	}

	return m_solde;
}


void CCptBanc::affiche()
{
	cout << "Nom du Titulaire : " << m_Nom_Titulaire << endl;
	if (m_solde == 0)
	{
		cout << "Veuillez alimenter votre compte" << endl;
	}
	else
	{
		cout << "Votre solde est de " << m_solde << endl << endl;
	}
}


