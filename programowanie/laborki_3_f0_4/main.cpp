#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
	int a_0=1;
	int N;  // n pierwszych wyrazow ciagu 
	double a_n; // dana liczba ciagu
	int i=1; // liczba iteracji
	
	cout << "Podaj N pierwszych wyrazow ciagu: "; cin >> N;
    if( N>0 || N<11)
    {
    	while(i<=N)
    	{
    	   a_n=1;
		   a_n=i*a_n+(1./i) ;
    	   cout << fixed << setprecision(4);
    		cout << "Liczba " << i << "." << " = " << a_n  << endl;
    		i++;
		}
	}
	else cout << "Podano liczby z poza zakresu" << endl;
	
	 
	return 0;
}
