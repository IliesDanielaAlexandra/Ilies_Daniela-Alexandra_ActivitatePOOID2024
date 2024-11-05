#include <iostream>
#include <string>

using namespace std;

class Magazin {
public:
	string denumireMagazin;
	string oras;
	int nrAngajati;
	float incasari;
	bool esteNonStop;

	//constructor cu toti parametri
	Magazin(string denumireMagazin,string oras,  int nrAngajati, float incasari, bool esteNonStop) {
		this->denumireMagazin = denumireMagazin;
		this->oras= oras;
		this->nrAngajati = nrAngajati;
		this->incasari = incasari;
		this->esteNonStop = esteNonStop;
	}



};

void main() {

	Magazin m1("Mega", "Cluj", 100, 350.8, 0);
	Magazin m2("Lidl", "Arad", 80, 550, 1);
}