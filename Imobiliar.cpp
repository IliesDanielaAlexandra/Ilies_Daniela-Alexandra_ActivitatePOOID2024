#include<iostream>
#include<string>
using namespace std;

/*Alegeți trei obiecte din realitate. Cele trei obiecte trebuie să fie din același domeniu. Domeniul îl
alegeți astfel încât să conțină inițialele voastre. */

/*Domeniul Imobiriar */

class Bloc {
public:
	static int idBloc;
	int nrApartamente;
	char* dezvoltator;
	const int anConstructie;

	Bloc() : dezvoltator(nullptr), anConstructie(1960) {
		idBloc++;
		this->nrApartamente = 0;
		this->dezvoltator = nullptr;
	}

	Bloc(const char* dezvoltator) :dezvoltator(nullptr), anConstructie(1960) {
		idBloc++;
		this->nrApartamente = 0;
		if (dezvoltator != nullptr) {
			this->dezvoltator = new char[strlen(dezvoltator) + 1];
			strcpy_s(this->dezvoltator, strlen(dezvoltator) + 1, dezvoltator);
		}
		else {
			this->dezvoltator = nullptr;

		}


	}

	Bloc(int nrApartamente, const char* dezvoltator) :dezvoltator(nullptr), anConstructie(1960) {

		idBloc++;
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

	void afisareBloc() {
		cout << "Id Bloc=" << idBloc << endl;
		cout << "Numar apartamente= " << nrApartamente << endl;
		if (dezvoltator != nullptr) {
			cout << "Dezvoltator = " << dezvoltator << endl;
		}
		else
		{
			cout << " Dezvoltatorul nu este atribuit" << endl;
		}

		cout << "An Constructie =" << anConstructie << endl << endl;

	}
};

class Dezvoltator {
public:
	static int idDezvoltator;
	string numeDezvoltator;
	int nrAngajati;
	float* salariiAngajati;
	const float tva;

	Dezvoltator() :tva(0.24) {

		idDezvoltator = idDezvoltator + 1;
		this->numeDezvoltator = "";
		this->nrAngajati = 0;
		this->salariiAngajati = nullptr;

	}
	Dezvoltator(string numeDezvoltator, int nrAngajati) :tva(0.24) {
		idDezvoltator = idDezvoltator + 1;
		this->numeDezvoltator = numeDezvoltator;
		this->nrAngajati = nrAngajati;
		this->salariiAngajati = nullptr;
	}

	Dezvoltator(string numeDezvoltator, int nrAngajati, float* salariiAngajati) : tva(0.24)
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

	void afisareDezvoltator() {
		cout << "Id Dezvoltatot=" << idDezvoltator << endl;
		cout << "Nume Dezvoltator=" << numeDezvoltator << endl;
		cout << "Numar Angajati=" << nrAngajati << endl;
		if (salariiAngajati != nullptr)
		{
			if (nrAngajati != 0) {
				for (int i = 0; i < nrAngajati; i++)
				{

					cout << "Salariul angajatului " << i + 1 << " este =" << salariiAngajati[i] << endl;
				}
			}
			else
			{
				cout << "Nu exista angajati deci nu exista salarii! " << endl;
			}
		}
		else
		{
			cout << "Nu avem salarii definite!" << endl;
		}

		cout << " TVA =" << tva << endl << endl;
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
	b1.afisareBloc();
	//cout << "b1" << endl;
	//cout << b1.anConstructie << endl;

	//cout << b1.idBloc << endl;
	//cout << b1.nrApartamente << endl;

	Bloc b2("Dezvoltator1");
	b2.afisareBloc();

	//cout <<"b2" << endl;
	//cout << b2.anConstructie << endl;
	//cout << b2.dezvoltator << endl;
	//cout << b2.idBloc << endl;
	//cout << b2.nrApartamente << endl;

	Bloc b3(10, "Dezvoltator2");
	b3.afisareBloc();
	/*cout << "b3" << endl;
	cout << b3.anConstructie << endl;
	cout << b3.dezvoltator << endl;
	cout << b3.idBloc << endl;
	cout << b3.nrApartamente << endl;*/


	Dezvoltator D1;
	D1.afisareDezvoltator();
	Dezvoltator D2("Dezvoltator1", 10);
	D2.afisareDezvoltator();
	float salrii[5] = { 5500,6500,4900,7300,8000 };
	Dezvoltator D3("Dezvoltator 2", 5, salrii);
	D3.afisareDezvoltator();

	Apartament A1;
	Apartament A2(3, 550000);
	float suprafata[4] = { 12.2 , 13, 15.5 ,14 };
	Apartament A3(4, suprafata, 800000, "Bloc1");


}