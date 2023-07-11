#include <iostream>

using namespace std;



int main() 
{
	cout << "Podaj 3 liczby reczywsite:" << endl ;
	double a, b, c; 
	cin >> a >> b >> c ;
	//if( a-b = 1*e^)
	double m = (a > b) ? a : b;
	double min;
	if( m == a) min = b;
	else if( m == b) min = a;
    double max = (m > c) ? m : c;
    double minimalna = (min < c) ? min : c ; 
    cout << "Najwieksza liczba z trzech to: " << max << endl;
    cout << "Najmniejsza liczba z trzech to: " << minimalna << endl;


	    
	  
	return 0;
}
