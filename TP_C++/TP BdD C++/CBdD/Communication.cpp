#include "pch.h"
#include "Communication.h"
#include <iostream>
#include <string>
#include <winsock.h>
#include <mysql.h>
#include "CBdD.h"

using namespace std;

Communication::Communication()
{
	string Requete;
	MYSQL *mysqlconnexion;
	MYSQL_ROW myROW;
	MYSQL_RES *myRES;
	m_hostname = 0;
	m_user = 0;
	m_password = 0;
	m_NomBdD = 0;
	m_port = 0;

}


Communication::~Communication()
{
}


int Communication::connect()
{
	bool ok;
	mysqlconnexion = mysql_init(NULL);
	if (!mysql_real_connect(mysqlconnexion, "localhost", "root", "", "nay", 3308, NULL, 0))
	{
		ok = false;
	}
	else
	{
		ok = true;
	}
	return ok;
}



void Communication::deconnect()
{
	mysql_close(mysqlconnexion);
}
