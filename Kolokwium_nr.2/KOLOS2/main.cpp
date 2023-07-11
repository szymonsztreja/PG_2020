#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

//Podpunkt 1.
struct Gra{
	int kod_produktu;
	char nazwa;
	float cena;
};

//Podpunkt 2.
void cena_produktu()
{   
  	Gra gierca;
    cout << "Podaj cene produktu: " ; cin >> gierca.cena; 
  	while(gierca.cena <=  0. )
  	{
  		cout << "Podaj poprawna cene: " ; cin >> gierca.cena;
	}
	cout << "Poprawna cena to: "<< gierca.cena << endl;
}
// Podpunkt 3.
void kod__produktu()
{   
    const int MAX_N = 5; 
    int Tablica[5];
    int suma;
	Gra gierca;
	
	do{ 
	    cout << "Podaj poprawny kod: ";
		cin >> gierca.kod_produktu;
		for(int i = 0 ; i<MAX_N; i++)
	      {
		   int pomocnicza = (pow(10,5-i));
		   Tablica[i] = gierca.kod_produktu/pomocnicza ; 
		   Tablica[i] = Tablica[i]%10 ;
	      }
	    for(int i = 0 ; i<MAX_N; i++)
	      {
		   suma = 0;
		   suma = suma+Tablica[i];
	      }
		}while(Tablica[0] != 1 && suma%2 != 0);
	
	cout << "Podales poprawny kod! " << endl;
	cout << "Poprawny kod: " << gierca.kod_produktu;	
}

void zapisujaca(int n,Gra Gry[])
{ 
   cout << "Podaj ilosc gier do zapisania: ";
   cin >> n;
   for(int i=0; i < n ; i++)
   {
   	cout << "Nazwa gry: ";
   	cin >> Gry[i].nazwa;
   	cout << " Kod gry: ";
	   kod__produktu();
   	//cin >> Gry[i].kod_produktu;
   	cout << " Cena gry:";
	    cena_produktu;
   	//cin >> Gry[i].cena;
   }
	
}
	


int main() 
{
	Gra gierca;
	Gra Gry[20];
	int n;
	
	
	cena_produktu();
	kod__produktu();
	zapisujaca(n, Gry);
	return 0;
}
