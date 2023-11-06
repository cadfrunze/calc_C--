#include <iostream>
#include <map>
#include <string>
//#include <math.h>
#include <stdlib.h>
#include "header.h"
using namespace std;

/*
* Programul va calcula o simpla operatie matematica intre doua numere intregi/zecimale, pozitive/negative
*/

int main() {
	double num1, num2, rezultat; // valori pt calcul si variabila rezultat pt stocarea operatiei matematice

	/* rasp_exit = variabila pt a continua sau iesi din program
	   rasp_con = variabila pt continuarea unei operatii matematice
	 */
	string operatorul, rasp_exit, rasp_con = ""; // operatorul pt functia calculatorul, iar celelalte variabile pt continuarea sau iesirea din program

	while (true) // ^1
	{
		cout << "Primul numar din operatia matematica: ";
		cin >> num1;
		cout << "\"+\" = adunare\n\"-\" = scadere\n\"*\" sau \"x\" = inmultire\n\"/\" sau \":\" = impartire\n\"^\" sau \"**\" = la puterea" << endl;
		cout << "Operatorul aritmetic: ";
		cin >> operatorul;
		cout << num1 << " " << operatorul << " (al doilea numar din operatia matematica): ";
		cin >> num2;

		if (num1 < 0) {
			num1 * -1;
		}
		else if (num2 < 0) {
			num2 * -1;
		}
		rezultat = calculatorul(operatorul, num1, num2);
		system("CLS");
		cout << num1 << " " << operatorul << " " << num2 << " = " << rezultat << endl;

		// Stresarea userului v1.1
		cout << "Doresti sa iesi din program?...raspunde cu: \"da\", \"d\", \"yes\",\"y\" sau \"nu\", \"n\", \"no\": ";
		cin >> rasp_exit;
		while ((rasp_exit != "da") && (rasp_exit != "d") && (rasp_exit != "yes") && (rasp_exit != "y") && (rasp_exit != "nu") && (rasp_exit != "n") && (rasp_exit != "no")) {
			cout << "\nN-am inteles...raspunde cu: \"da\", \"d\", \"yes\",\"y\" sau \"nu\", \"n\", \"no\": ";
			cin >> rasp_exit;
		}
		if ((rasp_exit == "da") || (rasp_exit == "d") || (rasp_exit == "yes") || (rasp_exit == "y")) // Iesire program 
		{
			break;
		}
		else // Continuarea programuluui
		{
			while (true) // ^2
			{
				system("CLS");
				cout << "Doresti sa il calculezi in continuare pe " << rezultat << " ? ";
				cin >> rasp_con;
				if ((rasp_con == "da") || (rasp_con == "d") || (rasp_con == "yes") || (rasp_con == "y"))
				{
					// In continuare calcul cu variabila rezultat, num1 va lua valoarea lui rezultat si intoarcerea la a doua bucla while (true)
					num1 = rezultat;
					cout << "\"+\" = adunare\n\"-\" = scadere\n\"*\" sau \"x\" = inmultire\n\"/\" sau \":\" = impartire\n\"^\" sau \"**\" = la puterea" << endl;
					cout << "Operatorul aritmetic: ";
					cin >> operatorul;
					cout << num1 << " " << operatorul << " (al doilea numar din operatia matematica): ";
					cin >> num2;
					if (num1 < 0) {
						num1 * -1;
					}
					else if (num2 < 0) {
						num2 * -1;
					}
					rezultat = calculatorul(operatorul, num1, num2);
					cout << num1 << " " << operatorul << " " << num2 << " = " << rezultat << endl;
				}
				else if ((rasp_con == "nu") || (rasp_con == "n") || (rasp_con == "no"))
				{
					// Intoarcerea la prima bucla while conform cerintelor userului....
					break;
				}
				// Stresarea userului v1.2
				while ((rasp_con != "da") && (rasp_con != "d") && (rasp_con != "yes") && (rasp_con != "y") && (rasp_con != "nu") && (rasp_con != "n") && (rasp_con != "no")) {
					cout << "\nN-am inteles...raspunde cu: \"da\", \"d\", \"yes\",\"y\" sau \"nu\", \"n\", \"no\": ";
					cin >> rasp_con;
				}
			}
		}
		
	}
	return 0;

 
}