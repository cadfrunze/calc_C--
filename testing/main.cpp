#include <iostream>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;


double adunare(double n1, double n2) {
	/*
	functie adunare
	*/
	return n1 + n2;
}

double scadere(double n1, double n2) {
	/*
	functie scadere
	*/
	return n1 - n2;
}

double impartire(double n1, double n2) {
	/*
	functie scadere
	*/
	return n1 / n2;
}	

double inmultire(double n1, double n2) {
	/*
	functie inmultire
	*/
	return n1 * n2;
}

double laPutere(double n1, double n2) {
	/*
	functie la puterea
	*/
	return pow(n1, n2);
}

void main() {
	double num1, num2;
	string operatorul = "";
	map <string, double> calculator;
	
	while (true){
		cout << "Primul numar din operatia matematica: ";
		cin >> num1;
		cout << "Operatorul aritmetic: ";
		cin >> operatorul;
		cout << "Al doilea numar din operatia matematica: ";
		cin >> num2;
		// Setare calculator
		calculator["+"] = adunare(num1, num2);
		calculator["-"] = scadere(num1, num2);
		calculator["/"] = impartire(num1, num2);
		calculator[":"] = impartire(num1, num2);
		calculator["*"] = inmultire(num1, num2);
		calculator["x"] = inmultire(num1, num2);
		calculator["**"] = laPutere(num1, num2);
		calculator["^"] = laPutere(num1, num2);
		// Rezultatul
		system("CLS");
		cout << "Rezultatul este: " << num1 << " " << operatorul << " " << num2 << " " << "=" << " " << calculator[operatorul] << '\n';
	}


 
}