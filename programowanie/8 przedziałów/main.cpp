#include <iostream>
#include <iomanip>

using namespace std;


//( -?, p1 ) [ p1, p2 ) [ p2, p3 ) [ p3, p4 ) [ p4, p5 ) [ p5, p6 ) [ p6, p7 ) [ p7, +? )
//Napisz program kwalifikuj¹cy wczytan¹ liczbê x do jednego z oœmiu przedzia³ów i wykonuj¹cy co najwy¿ej
//trzy proste porównania typu if ( x > pi ). Przyjmij, ¿e progi s¹ sta³ymi liczbowymi (ich wartoœci ustal
//samodzielnie). Program powinien wypisywaæ na standardowym wyjœciu przedzia³ (w postaci odpowiednich
//nierównoœci), do którego nale¿y x. 

int main() 
{
	double x, p1, p2 ,p3, p4, p5, p6, p7;
	p1=4, p2=31, p3=34,p4=43,p5=60,p6=65,p7=70;
	cout << "Podaj x" << endl;  cin >> x;
	if(x<p4)
	{
		if(x<p2)
		{
			(x<p1)?p1:p2
			cout << "Zmienna" << x << "nalezy do przedzialu: " << "("<< "inf" << ":" << p1 << ")" << endl;
			cout << "Zmienna" << x << "nalezy do przedzialu: " << "<"<< p1 << ":" << p2 << ")" << endl;
		}
		else
		{
		   if(x<p3)
		   cout << "Zmienna " << x << " nalezy do przedzialu: " << "<"<< p2 << ":" << p3 << ")" << endl;
		   else
		   cout << "Zmienna " << x << " nalezy do przedzialu: " << "<"<< p3 << ":" << p4 << ")" << endl;
	    }
    }  
	else 
	{
	     if(x<p6)
	     {
	     	if(x<p5)
	     	cout << "Zmienna" << x << "nalezy do przedzialu: " << "<"<< p4 << ":" << p5 << ")" << endl;
	     	else
	     	cout << "Zmienna" << x << "nalezy do przedzialu: " << "<"<< p5 << ":" << p6 << ")" << endl;
		 }
		 else
		 {
		    if(x<7)
			cout << "Zmienna" << x << "nalezy do przedzialu: " << "<"<< p6 << ":" << p7 << ")" << endl;
			else
			cout << "Zmienna" << x << "nalezy do przedzialu: " << "<"<< p7 << ":" << "inf" << ")" << endl;
		 }
    } 
	    	   
		
	
	return 0;
}
