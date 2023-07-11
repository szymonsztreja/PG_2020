#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double fun_log ( double a, double b, double c, double x)
{    
      return ((a*log10(b*x))+c); 
     
}

void Tablicowanie(int n, double Tablica[],double f_x, double a, double b, double c, int x_p, int x_k)
{   
    for(int i = 0 ; i<n; i++)
	{
	float skok_przedzialu = (x_p-x_k)/n;	
	double x= (x_k+(skok_przedzialu*i)); //wybranie x z przedzialu
	f_x = fun_log(a, b, c, x);
	Tablica[i] = f_x; 
    }
	for(int i = 0; i < n; i++)
	{ 
	 	cout << setw(6) << Tablica[i] << " ";
	}
	cout << endl;
}

void min_max (double min, double max, double Tablica[], int n)
{
    	max = Tablica[0];
    	for( int i=0; i<n; i++)
		{
    		if(Tablica[i]>max);
    		Tablica[i] = max;
		}
		cout << "Najwieszka liczba to: " << max << endl;
		
		min = Tablica[0];
    	for( int i=0; i<n; i++)
		{
    		if(Tablica[i]<=min);
    		Tablica[i] = min;
		}
		cout << "Najmniejsza liczba to: " << min << endl;
}

void sprawdzenie(int n, double Tablica[],int nierasnaco)
{
	for(int i = 0; i<n ; i++)
	{
	    if(Tablica[i]>=Tablica[i+1])
		nierasnaco++;	
	}
	
	if (nierasnaco == n-1)
	cout << "Wartosci sa uporzadkowane nierosnaco";
	else
	cout << "Wartosci sa uporzadkowane niemalejaco";
}

int main() 
{
    int a, b, c, n;
	int x_p, x_k, nierasnaco;
	double f_x, min, max;
	const int MAX_N=50;
	double Tablica[MAX_N];

	
	
	cout << "Podaj wspolczynnnik a: " ; cin >>a; cout << endl;
	cout << "Podaj wspolczynnnik b: " ; cin >>b; cout << endl;
	cout << "Podaj wspolczynnnik c: " ; cin >>c; cout 	<< endl;
    cout << "Poadj x_p: " ; cin >> x_p; cout << endl;
    cout << "Poadj x_k: " ; cin >> x_k; cout << endl;
	cout << "Poadj n: " ; cin >> n; cout << endl;

//	for (int i=1; i<=n; i++)
//	{
//	double f_x = fun_log(x_p, x_k, n,i, a, b, c , f_x);
//	cout << setprecision(3) << fixed << f_x << endl;
//	}
	Tablicowanie(n, Tablica, f_x, a, b, c, x_p, x_k);
	min_max(min, max, Tablica, n);
	sprawdzenie(n, Tablica, nierasnaco);
	
	return 0;
}

