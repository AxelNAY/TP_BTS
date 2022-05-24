#pragma once
#include <string>

using namespace std;

class CCptBanc
{
public:
	CCptBanc();
	~CCptBanc();
	CCptBanc(string, float);
private:
	string m_Nom_Titulaire;
	float m_solde;
public:
	void depot(float);
	float retrait(float);
	void affiche();

};

