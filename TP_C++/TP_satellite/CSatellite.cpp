#include "pch.h"
#include "CSatellite.h"
#include <string>
#include <iostream>

using namespace std;

CSatellite::CSatellite()
{
	m_vit = 0;
	m_masse = 0;
}


CSatellite::~CSatellite()
{
}

CSatellite::CSatellite(string nom, int vitesse, int masse)
{
	m_nom = nom;
	m_vit = vitesse;
	m_masse = masse;
}


void CSatellite::varVitesse(float force, int temps)
{
	int var;
	var = (force * temps) / m_masse;
	m_vit = m_vit + var;
}


void CSatellite::affCaract()
{
	cout << "Le satellite " << m_nom << " a une masse de " << m_masse << " kg et possede une vitesse de " << m_vit << " m/s." << endl;
}


double CSatellite::energie()
{
	double energie;
	energie = (m_masse * m_vit * m_vit) / 2;

	return energie;
}
