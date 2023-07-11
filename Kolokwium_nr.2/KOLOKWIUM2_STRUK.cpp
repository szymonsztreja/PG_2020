


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

const int wiersz = 10;
const int kolumna = 12;
const int MAX_OSOB = 10;

struct Osoba
{
	int wiek;
	float wzrost;
	float waga;
};

void pisz_menu()
{
		cout << "MENU" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "a - wyswietlenie tablicy" << endl;
		cout << "b - wypelnienie tablicy liczbami z przedzailu [50,100]" << endl;
		cout << "c - pobranie danych osoby" << endl;
		cout << "d - obliczenie BMI" << endl;
		cout << "e - wyjscie" << endl;
}

void wys_tablicy(short T[wiersz][kolumna], int x, int y)
{
	cout << "Tablica: " << endl;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			cout << setw(5) <<  T[i][j];
	cout << endl;		
}

void wyp_tablicy(short T[wiersz][kolumna], int x, int y)
{
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			T[i][j] = 50 + rand()%(100 - 50 + 1);
}

void pobranie(Osoba T[])
{
	cout << "Podaj dane osoby: " << endl;
	cout << "Wiek: ";
	cin >> T[0].wiek;
	cout << "Waga: ";
	cin >> T[0].waga;
	cout << "Wzrost: ";
	cin >> T[0].wzrost;
	cout << endl;
}

float bmi(Osoba T[], int waga_o, int wzrost_o)
{
	waga_o = T[0].waga;
	wzrost_o = T[0].wzrost;
	return  (waga_o/pow(wzrost_o, 2));
}

void menu(char &wybor, short T[wiersz][kolumna], float BMI, Osoba O[])
{
	do
	{
		pisz_menu();
		cin >> wybor;
		switch(wybor)
		{
			case 'a': wys_tablicy(T, wiersz, kolumna);
				break;
			case 'b': wyp_tablicy(T, wiersz, kolumna);
				break;
			case 'c': pobranie(O);
				break;
			case 'd':
				BMI = bmi(O, O[0].waga, O[0].wzrost);
				cout << setprecision(4) << "BMI = " << BMI << endl;
				break;
			case 'e':
				cout << "Dziekuje za uzytkowanie!" << endl;
				break;
			default:
				cout << "Nie wybrano zadnej opcji." << endl;
				break;						
		}
	}while(wybor != 'e');
}

int main()
{
	srand(time(0));
	short TAB[wiersz][kolumna] = {0};
	Osoba osoba[MAX_OSOB];
	char wybor;
	float BMI;
	
	menu(wybor, TAB, BMI, osoba);
	
	system("pause");
	return 0;
}
