#include <iostream>
#include <string>
using namespace std;

struct Gra
{
	int kod_produktu;
	string nazwa;
	float cena;
};

void koszt(float &x)
{
	do{
	cout << "Podaj cene produktu: ";
	cin >> x;
	if (x > 0)
		break;
	cin.clear();
	cin.sync();	
	} while(x < 0);
}

int liczba_cyfr(int liczba)
{
	int b = 1;
	int i = 0;
	while(liczba = liczba/10)
	{
		b++;
	}	
	return b;
}

void liczba_1(int &reszta, int liczba, int T[])
{
	int i = 0;
	while(liczba = liczba/10)
	{
		reszta = liczba%10;
		T[i] = reszta;
		i++;
	}	
}

void kod_check(int &x, int cyfry, int reszta, int T[], int suma)
{
	do{
	cout << "Podaj kod produktu: ";
	cin >> x;
    suma = 0;
	cyfry = liczba_cyfr(x);
	liczba_1(reszta, x, T);
	for(int i = 0; i < cyfry; i++)
		suma += T[i];
	if(cyfry == 5 && T[4] != 1 && suma%2!=0)
		break;
	cin.clear();
	cin.sync();
	} while(cyfry != 5 || T[4] != 1 || suma%2!=0);
}

void wpisywanie(int n, float &x, int &y, int cyfry, int reszta, int Tab[], string &nazwa, int suma)
{
		koszt(x);
		kod_check(y, cyfry, reszta, Tab, suma);
		cout << "Podaj nazwe produktu: ";
		cin >> nazwa;
}

void wypisywanie(int n, int x, int y, string nazwa)
{
		cout << "Cena: " << x << endl;
		cout << "Kod: " << y << endl;
		cout << "Nazwa: " << nazwa << endl;
}

int main()
{
	int l_cyfr, reszta, ilosc, suma, min;
	const int MAX_C = 50;
	int Tab[MAX_C];
	Gra cena, kod_produktu, nazwa;
	Gra gry[MAX_C];
	
	cout << "Ile gier chcesz wpisac? ";
	cin >> ilosc;
	
	for(int i = 0; i < ilosc; i++){
		cout << "Podaj dane " << i+1 << " gry: " << endl;
		wpisywanie(ilosc, gry[i].cena, gry[i].kod_produktu, l_cyfr, reszta, Tab, gry[i].nazwa, suma);
	}
	for(int i = 0; i < ilosc; i++){
		cout << "Dane " << i+1 << " gry:" << endl;
		wypisywanie(ilosc, gry[i].cena, gry[i].kod_produktu, gry[i].nazwa);
	}
	min = gry[0].cena;
	for(int i = 1; i < ilosc; i++)
	{
		if(gry[i].cena < min)
			min = gry[i].cena;
	}
	cout << "Najmniejsza cena to: " << min << endl;
}
