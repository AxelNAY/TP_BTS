#pragma once

#include <string>

using namespace std;

class CMastermind
{
public:
	CMastermind();
	~CMastermind();
	CMastermind(int, int);
private:
	string m_secret;
	string m_essai;
	string m_code;
	int m_nb_essais;
	int m_nb_essaisMax;
	bool m_fini;
	int m_taille_code;
public:
	void usage();
	void choisirSolution();
	void saisirEssai(string);
	void verifierEssai();
	void afficherResultat();
	bool get_m_fini();
};

