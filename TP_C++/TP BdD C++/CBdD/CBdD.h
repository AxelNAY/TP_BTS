#pragma once
#include <string>
using namespace std;
#include <winsock.h>
#include <mysql.h>
#include "Communication.h"
#include <vector>

class CBdD :
	public Communication
{
public:
	CBdD();
	~CBdD();
private:
	string Requete;
	int RequeteNonOK;
	MYSQL_ROW myROW;
	MYSQL_RES *myRES;
	bool m_OK;
	string NomTable;
	string m_Enre;
public:
	void afficher();
	bool table(string, vector<string> *);
};

