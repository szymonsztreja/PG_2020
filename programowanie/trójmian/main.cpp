#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Podaj 3 liczby rzeczywiste abc: " ;
	double a, b, c, delta, x, x_1, x_2;
	cin >> a >> b >> c;
	if(a==0)
	    if(b!=0){
	         x= (c)/b ;cout << setprecision(5) ;
	         cout << "Rozwiazanie rownania to: " << x ;}
	         else cout << "Rownanie ma nieskonczona liczba rozwiazan " << endl; 
	  
	else{
	    delta = b*b-(4*a*c) ;
		    if(delta>0){
			double d = sqrt(delta) ;
			 x_1 = -b-d/(2*a) ; cout << setprecision(5) ;
			  x_2 = -b+d/(2*a) ; cout << setprecision(5) ;
			   cout << "Rozwiazanie rownania to: " << x_1 << "  i   " << x_2 << endl ;}
		     else if (delta<0) cout << "Rownanie nie ma rozwiazan w zbiorze liczb rzeczywistych " << endl;
		     else cout << " Rowanie ma jedno rozwiazanie" << cout << -b/2*a << endl;

	   	}
	
	
	return 0;
}
