#include<iostream>
using namespace std;

/*Alegeți trei obiecte din realitate. Cele trei obiecte trebuie să fie din același domeniu. Domeniul îl
alegeți astfel încât să conțină inițialele voastre. */

/*Domeniul Imobiriar */

class Bloc {
public:
	static int idBloc;
	int nrApartamente;
	char* dezvoltator;
	const int anConstructie = 1960;

	Bloc(){}

	Bloc(const char* dezvoltator) {

		if (dezvoltator != nullptr) {
			
			this->dezvoltator = new char[strlen(dezvoltator) + 1];
			strcpy_s(this->dezvoltator, strlen(dezvoltator) + 1, dezvoltator);
									}
		else {
			this->dezvoltator = nullptr;
			 }


		}

	Bloc(int nrApartamente, const char* dezvoltator) :anConstructie(anConstructie) {
		idBloc = idBloc + 1;
		this->nrApartamente = nrApartamente;
		if (dezvoltator != nullptr)
			{
			this->dezvoltator = new char[strlen(dezvoltator + 1)];
			strcpy_s(this->dezvoltator, strlen(dezvoltator) + 1, dezvoltator);
			}
		else
			{
			this->dezvoltator = nullptr;
			}


		}


};
int Bloc::idBloc = 0;

void main() {

	Bloc b1();
	Bloc b2("Dezvoltator1");
	Bloc b3(10,"Dezvoltator2");

}