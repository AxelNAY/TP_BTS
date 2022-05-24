#pragma once
class CRectangle
{
public:
	CRectangle();
	~CRectangle();
	CRectangle(int, int);
private:
	int m_L;
	int m_H;
public:
	int calPerim();
	int calSurf();
	void affiche();
	void setm_L(int);
	void setm_H(int);
};

