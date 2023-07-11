#include <iostream>
#include <iomanip>
using namespace std;

// --- zwraca indeks elementu najmniejszego w wektorze T

int minIndeks( int T[], int a, int b )
{
    int min = a;
    for( int i = a+1; i <= b; i++ )
        if( T[i] < T[min] )  min = i;
    return min;
}

// --- zamienia wartoœci elementów o indeksach i oraz j

void zamiana( int T[], int i, int j )
{
    int buf = T[i];
    T[i] = T[j];
    T[j] = buf;
}

// --- sortowanie przez wybieranie najmniejszego elementu 
//     wœród elementów o indeksach w zakresie [p,n-1]

void selectionSort( int T[], int n )
{
    for( int p = 0; p < n-1; p++ ) 
       zamiana( T, p, minIndeks( T, p, n-1 ));
}

// --- wypisanie wektora na standardowym wyjœciu

void piszTab( int T[], int n )
{
  for( int i = 0; i < n; i++ )
     cout << setw(6) << T[i];
  cout << endl;
}

void sprawdzenie(int Tab[],int T[], int n)
{   
    Tab[0]=
  	for(int i = 0; i<n; i++)
	{
  	Tab[i]=T[selectionSort(T, i, n-1)];
  	for( int p = 0; p < n-1; p++ ) 
       zamiana( T, p, minIndeks( T, p, n-1 ));
  	//cout << setw(6) << Tab[i];
  	}
}

int main() 
{
   int T[] = {0,  3, 2, 1, 5, -3};    // przyk³adowa tablica
   int n = sizeof(T)/sizeof(T[0]);    // oraz iloœæ jej elementów
   int Tab[n];
   
   piszTab( T, n );
   //selectionSort( T, n );
   sprawdzenie(Tab, T, n);
   piszTab(Tab,n);
   piszTab( T, n );
   
   return 0;
}
