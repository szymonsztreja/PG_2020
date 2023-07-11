#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int srednia_art(int *tab,int a)
{
	float srednia=0 ;
	for( int i = 0; i<a ; i++)
	{
		srednia += (*(tab+i));
	}
	srednia = srednia/a;
	return srednia ;
}

void generuj_tab(int *tab, int a)
{
	for( int i = 0; i<a ; i++)
	{
		(*(tab+i)) = rand() % 11; 
	}
}

void wypisz(int *tab,int a)
{
	cout << srednia_art(tab, a);
}

void bigger_srednia(int *tab,int n)
{
	for( int i = 0; i<n; i++)
	{
		if( *(tab+i) > srednia_art(tab, n) )
		cout << *(tab+i) << "  " << endl;
	}
}

int main() 
{
	int liczba;
	srand(time(NULL));
	int *tab;
	tab = new int[liczba]; 
	
	cin >> liczba;
	generuj_tab(tab, liczba);
	srednia_art(tab, liczba);
	wypisz(tab, liczba);
	bigger_srednia( tab, liczba);

	
	
	
	return 0;
}
