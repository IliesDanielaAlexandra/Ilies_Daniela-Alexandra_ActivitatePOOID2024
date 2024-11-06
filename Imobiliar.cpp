#include<iostream>
#include<string>
using namespace std;

/*Domeniul Imobiriar */

class Bloc {
public:
	static int idBloc;
	int nrApartamente;
	char* dezvoltator;
	const int anConstructie = 1960;

	Bloc() {
		this->nrApartamente = 0;
		this->dezvoltator = nullptr;
		idBloc = idBloc + 1;

	}

	Bloc(const char* dezvoltator) :anConstructie(anConstructie) {
		this->nrApartamente = 0;
		if (dezvoltator != nullptr) {
			this->dezvoltator = new char[strlen(dezvoltator) + 1];
			strcpy_s(this->dezvoltator, strlen(dezvoltator) + 1, dezvoltator);
		}
		else {
			this->dezvoltator = nullptr;

		}

		idBloc = idBloc + 1;
	}

	Bloc(int nrApartamente, const char* dezvoltator) :anConstructie(anConstructie) {

		idBloc = idBloc + 1;
		this->nrApartamente = nrApartamente;
		if (dezvoltator != nullptr)
		{
			this->dezvoltator = new char[strlen(dezvoltator) + 1];
			strcpy_s(this->dezvoltator, strlen(dezvoltator) + 1, dezvoltator);
		}
		else
		{
			this->dezvoltator = nullptr;
		}


	}

	~Bloc() {
		delete[] dezvoltator;
	}

};

class Dezvoltator {
public:
	static int idDezvoltator;
	string numeDezvoltator;
	int nrAngajati;
	float* salariiAngajati;
	const float tva = 0.24;

	Dezvoltator() :tva(tva) {

		idDezvoltator = idDezvoltator + 1;
		this->numeDezvoltator = "";
		this->nrAngajati = 0;
		this->salariiAngajati = nullptr;

	}
	Dezvoltator(string numeDezvoltator, int nrAngajati) :tva(tva) {
		idDezvoltator = idDezvoltator + 1;
		this->numeDezvoltator = numeDezvoltator;
		this->nrAngajati = nrAngajati;
		this->salariiAngajati = nullptr;
	}

	Dezvoltator(string numeDezvoltator, int nrAngajati, float* salariiAngajati) : tva(tva)
	{
		idDezvoltator = idDezvoltator + 1;
		this->numeDezvoltator = numeDezvoltator;
		this->nrAngajati = nrAngajati;
		if (nrAngajati != 0) {
			this->salariiAngajati = new float[nrAngajati];
			for (int i = 0; i < nrAngajati; i++) {
				this->salariiAngajati[i] = salariiAngajati[i];
			}

		}
		else { this->salariiAngajati = nullptr; }

	}

	~Dezvoltator() {
		delete[] this->salariiAngajati;
	}

};

class Apartament {
public:
	static int idApartament;
	int nrCamere;
	float* suprafataCamera;
	float pret;
	const bool vandut;
	string bloc;


	Apartament() :vandut(0) {
		idApartament = idApartament + 1;
		this->nrCamere = 0;
		this->suprafataCamera = nullptr;
		this->pret = 0;
		this->bloc = "";

	}

	Apartament(int nrCamere, float pret) : vandut(0) {
		idApartament = idApartament + 1;
		this->nrCamere = nrCamere;
		this->suprafataCamera = nullptr;
		this->pret = pret;
		this->bloc = "";

	}

	Apartament(int nrCamere, float* suprafataCamera, float pret, string bloc) : vandut(0) {
		idApartament = idApartament + 1;
		this->nrCamere = nrCamere;
		if (nrCamere != 0)
		{
			this->suprafataCamera = new float[nrCamere];
			for (int i = 0; i < nrCamere; i++)
			{
				this->suprafataCamera[i] = suprafataCamera[i];
			}
		}
		else {
			this->suprafataCamera = nullptr;
		}

		this->pret = pret;
		this->bloc = bloc;


	}

	~Apartament() {
		delete[] this->suprafataCamera;
	}

};
int Bloc::idBloc = 0;
int Dezvoltator::idDezvoltator = 0;
int Apartament::idApartament = 0;

void main() {

	Bloc b1;
	Bloc b2("Dezvoltator1");
	Bloc b3(10, "Dezvoltator2");

	Dezvoltator D1;
	Dezvoltator D2("Dezvoltator1", 10);
	float salrii[5] = { 5500,6500,4900,7300,8000 };
	Dezvoltator D3("Dezvoltator 2", 5, salrii);

	Apartament A1;
	Apartament A2(3, 550000);
	float suprafata[4] = { 12.2 , 13, 15.5 ,14 };
	Apartament A3(4, suprafata, 800000, "Bloc1");

}