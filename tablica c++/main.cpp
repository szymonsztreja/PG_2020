#include <iostream>
#include <time.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std; 

int main()
{
 srand(time(0));
     int x;
     const unsigned int  T=5;
     int tablica[T];
     int nr_indeksu;
     double liczba;
     int suma_x=0;
     bool nalezy = true;
 
	  
     x=0+rand()%(10);
     
     //for(int i=0; i<5; i++)
     //tablica[i]=0;
         
     
     cout << "Podaj liczbe dodatnia dokladnie 5 cyfrowa: ";
     cin >> liczba ;
        if(liczba<10000 || liczba>99999)
            {
            cout << "Bledne dane!";
            exit(1);
            }
        else
           {
           	for(int i=4; i>=0;i--)
           	   {
           	   	int pomocnicza=pow(10,i);
           	   	tablica[i] = liczba/pomocnicza;
           	   	tablica[i] = tablica[i]%10;
           	   	//cout << tablica[i] << "  " ;
           	   	if(x==tablica[i])
           	   	   {
           	   	   	suma_x=suma_x+1;
           	       }
				} 
			cout << endl;	
			cout << "Tablica T:";	  
		    for(int i=4;i>=0;i--)
		      {
		      	cout << tablica[i] << " ";
		      }
		    cout << endl;     
		    cout << "Liczba x:" << x; 
			cout << " Wystepuje: " << suma_x << " razy." << endl;
			//cout << "Tablica T:" << tablica[i] ; 
			  
		   }
	 cout << endl;	    
        

system("pause");
return 0;
}



