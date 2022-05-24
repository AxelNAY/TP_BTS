#pragma once
#include <string>
using namespace std;
#include <winsock.h>
#include <mysql.h>
#include "CBdD.h"

class Communication
{
public:
	Communication();
	~Communication();
private:
	string Requete;
	MYSQL_ROW myROW;
	MYSQL_RES *myRES;
	char m_hostname;
	char m_user;
	char m_password;
	char m_NomBdD;
	unsigned int m_port;
public:
	int connect();
	void deconnect();
protected:
	MYSQL *mysqlconnexion;
};

