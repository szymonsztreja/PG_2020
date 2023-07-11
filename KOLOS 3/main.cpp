#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

const int MAX_ZAW = 1000;

struct Zawodnik {
	int nr_start;
	float wynik;
	float zmiana;
	string nazwisko;

};

void wczytaj_zawodnikow(Zawodnik* zawodnicy[], int& ile) {
	Zawodnik zawodnik;
	ifstream plik_wej("K3_EiT.txt");
	if (!plik_wej)
		cout << "Blad odczytu pliku wejsciowego" << endl;

	int i = 0;
	while (plik_wej >> zawodnik.nr_start >> zawodnik.wynik >> zawodnik.zmiana >> zawodnik.nazwisko) {
		zawodnicy[i] = new Zawodnik;
		*(zawodnicy[i]) = zawodnik;
		i++;
		ile = i;
	}

	plik_wej.close();
}

void wypisz_zawodnikow(Zawodnik* zawodnicy[], const int ile) {
	for (int i = 0; i < ile; i++)
		cout << "Nazwisko: " << zawodnicy[i]->nazwisko << "\t Numer startu: " << zawodnicy[i]->nr_start << "\t Wynik:" << zawodnicy[i]->wynik << "\t Zmiana:" << zawodnicy[i]->zmiana << endl;
}

void wypisz_najlepszych(Zawodnik* zawodnicy[], int& ile)
{
	int suma_zaw = 0 ;
	for (int i = 0; i < ile; i++)
		if (zawodnicy[i]->wynik > 4000)
		{
			suma_zaw++;
			//zawodnicy[i]->wynik
			if(zawodnicy[i]->wynik )
			cout << "Nazwisko: " << zawodnicy[i]->nazwisko << "\t Numer startu: " << zawodnicy[i]->wynik << endl; //<< zawodnicy[i]->nr_start << "\t Wynik:" << "\t Zmiana:" << zawodnicy[i]->zmiana <<
		}
			
}



void usun_zawodnika(Zawodnik* zawodnicy[], int& ile) {
	delete zawodnicy[ile-1];
	zawodnicy[ile] = NULL;
	ile--;
}


void menu(Zawodnik* zawodnicy[], int& ile) {

	int wybor = 0;

	while (wybor != 5) {
		cout << "Co chcialbys zrobic" << endl;
		cout << "1 - wczytaj dane z pliku" << endl;
		cout << "2 - wypisz liste zawodnikow" << endl;
		cout << "3 - wypisz najlepszych zawodnikow" << endl;
		cout << "4 - usun ostatniego zawodnika" << endl;
		cout << "5 - zakoncz program" << endl;
		cout << "Wybor: "; cin >> wybor;

		switch (wybor) {
		case 1: wczytaj_zawodnikow(zawodnicy, ile);
			break;
		case 2: wypisz_zawodnikow(zawodnicy, ile);
			break;
		case 3: wypisz_najlepszych(zawodnicy, ile);
			break;
		case 4: usun_zawodnika(zawodnicy, ile);
			break;
		case 5: exit(1);
			break;
		}
	}
}

int main() {

	Zawodnik* zawodnicy[MAX_ZAW];
	int ile = 0;
	menu(zawodnicy, ile);

	return 0;
}
