#include "pch.h"
#include "CRectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle()
{
	m_L = 0;
	m_H = 0;
}


CRectangle::~CRectangle()
{
}

CRectangle::CRectangle(int L, int H)
{
	m_L = 0;
	m_H = 0;
}


int CRectangle::calPerim()
{
	int P;
	P = 2 * (m_H + m_L);
	cout << "Le périmetre de R1 est " << P << endl;
	return 0;
}


int CRectangle::calSurf()
{
	int S;
	S = m_H * m_L;
	cout << "La surface de R1 est " << S << endl;
	return 0;
}


void CRectangle::affiche()
{
	int i = 0;
	int j;
	while (i < m_H)
	{
		j = 0;

		while (j < m_L)
		{
			cout << "*";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}

void CRectangle::setm_L(int L)
{
	m_L = 0;
	m_L = m_L + L;
}

void CRectangle::setm_H(int H)
{
	m_H = 0;
	m_H = m_H + H;
}
