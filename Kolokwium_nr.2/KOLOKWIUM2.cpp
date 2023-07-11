#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void dane(int &poczatek, int &koniec, int &zakres, double &a, double &b, double &c)
{
	cout << "Program podaje rozwiazania funkcji 'a*log(bx) + c' dla wybranych x'ow." << endl;
	cout << "Uzytkownik podaje przedzial x'ow, wspolczynniki a, b i c oraz ilosc losowanych x'ow." << endl;
	cout << "Poczatek przedzialu: ";
	cin >> poczatek;
	cout << "Koniec przedzialu: ";
	cin >> koniec;
	cout << "Ilosc x'ow: ";
	cin >> zakres;
	cout << "Wspolczynnik a: ";
	cin >> a;
	cout << "Wspolczynnik b: ";
	cin >> b;
	cout << "Wspolczynnik c: ";
	cin >> c; 
}


double obliczanie(double a, double x, double c, double b)
{
	return ((a*log10(b*x)) + c);
}

void tablicowanie(int poczatek, int koniec, int zakres, double funkcja, double x, double T[], double a, double b, double c)
{
	for(int i = 0; i < zakres; i++)
	{
		x = poczatek + rand()%(koniec - poczatek + 1);
		funkcja = obliczanie(a, x, c, b);
		T[i] = funkcja;
	}
	
	cout << setprecision(5);
	cout << "Tablica: ";
	for(int i = 0; i < zakres; i++)
		cout << T[i] << " ";
	cout << endl;	
}

void min_max(double min, double max, double T[], int zakres)
{
	min = T[0];
		for(int i = 1;i<zakres;i++)
		{
			if (min > T[i])
				min = T[i];
		}
		cout << "Najmniejsza liczba: " << min << endl;
		
	max = T[0];
		for(int i = 1; i<zakres;i++)
		{
			if (max < T[i])
				max = T[i];
		}
		cout << "Najwieksza liczba: " << max << endl;	
}

void sprawdzenie( double T[], int niem, int zakres )
{
    for( int i = 0; i < zakres; i++ )
    {
        if( T[ i ] <= T[ i + 1 ] )
        {
            niem++;
        }
    }
    if( niem == zakres-1 )
        cout << "tablica uporzadkowana niemalejaco" << endl;
    else
        cout << "tablica uporzadkowana nierosnaco" << endl;
    
}
int main()
{
	srand(time(0));
	double a, b, c, x, f_x, min, max;
	int x_p, x_k, n, licznik;
	const int MAX_TAB = 50;
	double TAB[MAX_TAB];
	
	dane(x_p, x_k, n, a, b, c);
	tablicowanie(x_p, x_k, n, f_x, x, TAB, a, b ,c);
	min_max(min, max, TAB, n);
	sprawdzenie(TAB, licznik, n);
	
	system("pause");
	return 0;
}
