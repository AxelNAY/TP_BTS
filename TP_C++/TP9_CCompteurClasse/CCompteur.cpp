#include "pch.h"
#include "CCompteur.h"
#include <iostream>

using namespace std;

CCompteur::CCompteur()
{
	m_cpt = 0;
}


CCompteur::~CCompteur()
{
}

void CCompteur::affiche()
{
	cout << "La valeur du compteur est : " << m_cpt << endl;
}


void CCompteur::reinitialise()
{
	m_cpt = 0;
}


void CCompteur::clic()
{
	m_cpt++;
}


void CCompteur::clicMultiple(int mult)
{
	m_cpt = m_cpt + mult;
}

int CCompteur::getm_cpt(void);
{

}