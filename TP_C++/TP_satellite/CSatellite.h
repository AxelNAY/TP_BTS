#pragma once
#include <string>

using namespace std;

class CSatellite
{
public:
	CSatellite();
	~CSatellite();
	CSatellite(string, int, int);
private:
	string m_nom;
	int m_vit;
	int m_masse;
public:
	void varVitesse(float, int);
	void affCaract();
	double energie();
};

