
#include "pch.h"
#include <iostream>
#include <winsock.h>
#include <mysql.h>

using namespace std;

int main()
{
	unsigned int i, j;
	int RequeteNonOk;
	string Requete;

	char hostname[] = "localhost";
	char user[] = "root";
	char password[] = "";
	char NomBdD[] = "nay";
	unsigned int port = 3308;

	MYSQL *mysqlconnexion;
	MYSQL_ROW myROW;
	MYSQL_RES *myRES;

	mysqlconnexion = mysql_init(NULL);

	if (!mysqlconnexion)
	{
		cout << "Echec de l'initialisation du gestionnaire de connexion" << endl;
	}
	else
	{
		if (!mysql_real_connect(mysqlconnexion, hostname, user, password, NomBdD, port, NULL, 0))
		{
			cout << "Echec de connexion a la BdD desiree se trouvant sur le serveur" << endl;
		}
		else
		{
			Requete = "select * from badge";
			RequeteNonOk = mysql_query(mysqlconnexion, Requete.c_str());
			if (RequeteNonOk)
			{
				cout << "La requete n'a pas ete comprise par le serveur" << endl;
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
							cout << myROW[j] << "  ";
						}
					}
					mysql_free_result(myRES);
				}
			}
			mysql_close(mysqlconnexion);
		}
	}

}