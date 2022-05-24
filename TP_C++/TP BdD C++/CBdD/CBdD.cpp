#include "pch.h"
#include "CBdD.h"
#include <iostream>
#include <string>
using namespace std;
#include <winsock.h>
#include <mysql.h>
#include "Communication.h"
#include <vector>

CBdD::CBdD()
{
	string Requete;
	MYSQL *mysqlconnexion;
	MYSQL_ROW myROW;
	MYSQL_RES *myRES;
	RequeteNonOK = 0;
	m_OK;
	NomTable;
	m_Enre;
}


CBdD::~CBdD()
{
}


void CBdD::afficher()
{
	// TODO: Ajoutez ici votre code d'implémentation..
}

bool CBdD::table(string NomTable, vector<string> * v)
{
	unsigned int i, j;
	Requete = "select * from " + NomTable;
	RequeteNonOK = mysql_query(mysqlconnexion, Requete.c_str());
	if (RequeteNonOK)
	{
		m_OK = false;
	}
	else
	{
		myRES = mysql_store_result(mysqlconnexion);
		if (myRES)
		{
			for (i = 0; i < (myRES->row_count); i++)
			{
				myROW = mysql_fetch_row(myRES);
				for (j = 0; j < mysql_num_fields(myRES); j++)
				{
					m_Enre = m_Enre + myROW[j] + "\t";
				}
				v->push_back(m_Enre);
				m_Enre = "";
			}
			mysql_free_result(myRES);
			m_OK = true;
		}
	}
	return(m_OK);
}
