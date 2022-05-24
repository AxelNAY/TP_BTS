#pragma once
class CCompteur
{
public:
	CCompteur();
	~CCompteur();
private:
	int m_cpt;
public:
	void affiche();
	void reinitialise();
	void clic();
	void clicMultiple(int);
	int getm_cpt(void);
};

