#include "pch.h"
#include "CPoint.h"
#include <iostream>

using namespace std;

CPoint::CPoint()
{
	m_x = 0;
	m_y = 0;
}


CPoint::CPoint(int x, int y)
{
	m_x = x;
	m_y = y;
}


void CPoint::deplace(int dx, int dy)
{
	m_x = m_x + dx;
	m_y = m_y + dy;
}


void CPoint::affiche()
{
	cout << "Le point est en x = " << m_x << " et y = " << m_y << endl;
}


void CPoint::initialise(int x, int y)
{
	m_x = x;
	m_y = y;
}

void CPoint::setm_x(int x)
{
	m_x = x;
}

int CPoint::getm_x(void)
{
	return m_x;
}

void CPoint::setm_y(int y)
{
	m_y = y;
}

int CPoint::getm_y(void)
{
	return m_y;
}