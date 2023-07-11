#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int m, n;
	double pole, pole1;
	cout << "Podaj wymiary prostokata: " ;
	cin >> n >> m;
	
	if(m>0 && n>0 && (m%2)!=0 && (n%2)!=0)
	  {
	  	cout << "1/7 pola prostokata wynosi: ";
	  	double x= 1./7.;
	  	pole=m*n ;
	  	pole1 = x*pole;
	  	cout << x << endl;
	  	cout << setprecision(3) << fixed <<  pole1 << endl;

		   for(int i = 0; i<n ; i++)
		   {
		     
		      for(int j= 0; j<m ; j++)
		       {
		       	if(i%2==0)
		    	cout << "x";
				else{
				if(j%2==0)
                 cout << "o" ;
                 else cout << "@";
				  
			    }
			   } 
			   cout << endl; 
		   }
			
	  }
	  else cout << "Bledne dane!";
	  
	  double Tablica[10];
	  if(m>n)
	  {
		 for(int i= 0 ; i<5 ; i++){
		 	int losowa = rand()%(m-n)+n;
		 	Tablica[i]= losowa;
		 	cout <<setw(8) << Tablica[i];	
		 }	
	  }
	  else{
	  	for(int i= 0 ; i<5 ; i++){
		 	int losowa = rand()%(n-m)+m;
		 	Tablica[i]= losowa;
		 	cout <<setw(8) << Tablica[i];
		 }
	  }
	return 0;
}
