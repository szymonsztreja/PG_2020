// L3_F0_Z2.cpp  Program dodaje i odejmuje (na przemian) liczby  - Iteracja warunkowa

#include<iostream>
#include <limits>
using namespace std;

int main( )
{ 
  int n;
  char znak = 'o';
  cout << "Podaj wymiary trojkata [1;30]: "; cin >> n;
  if(n>=1 && n<=30)
    {   if(n==1) cout << znak << endl;
        else
		{
		   for(int i=0; i<=n; i++)
		      {
		       for(int k=n; k>=i; k--)
               {
			   cout << znak;}
			   cout << endl;
	          }
		cout << endl;
	    }   
    }
   else cout << "Podano niepoprawne dane" << endl;	
    	 
  	


  system("pause"); 
  return 0; 
}
