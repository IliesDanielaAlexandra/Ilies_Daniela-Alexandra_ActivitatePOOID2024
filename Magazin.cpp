#include <iostream>
#include <string>

using namespace std;

class Magazin {
public:
	string denumireMagazin;
	int nrAngajati;
	float suprafataMagazin;
	bool esteNonStop;

	//constructor cu toti parametri
	Magazin(string denumireMagazin, int nrAngajati, float suprafataMagazin, bool esteNonStop) {
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazin = suprafataMagazin;
		this->esteNonStop = esteNonStop;
	}



};

void main() {

	Magazin m1("Mega", 100, 350.8, 0);
	Magazin m2("Lidl", 80, 550, 1);
}