#pragma once
#include <string>

using namespace std;

class CEtudiant
{
public:
	CEtudiant();
	~CEtudiant();
	CEtudiant(string, string);
private:
	string m_nom;
	string m_prenom;
	int m_i;
	int m_notes[10];
	int m_moyenne;
public:
	void affichage();
	void saisie(int);
	int moyenne();
	bool admis();
};

