#include <iostream>
#include <string>
#include <map>
#include "header.h"
using namespace std;



double calculatorul(string op, double n1,double n2) {
	// Calculatorul....argumentele provin din functia main
	map <string, double> calculator;
	calculator["+"] = adunare(n1, n2);
	calculator["-"] = scadere(n1, n2);
	calculator["/"] = impartire(n1, n2);
	calculator[":"] = impartire(n1, n2);
	calculator["*"] = inmultire(n1, n2);
	calculator["x"] = inmultire(n1, n2);
	calculator["**"] = laPutere(n1, n2);
	calculator["^"] = laPutere(n1, n2);
	return calculator[op];
}