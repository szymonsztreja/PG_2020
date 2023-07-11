//L4_F1_S1.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>
#include<cstdlib>
using namespace std;

   const int MLP = 50 ;    // Maksymalna liczba pasa¿erów  
   const int LDT = 7 ;     // Liczba dni w tygodniu    
   const int  LG = 12;     // Liczba godzin pomiaru dziennie
   const int  GP = 8  ;    // Godzina poczatkowa

/*void testowa(int N, int M=10){
	for(int i=0; i<N;i++)
	cout << "Hejo";
	cout << endl;
	for(int i=0; i<M; i++)
	cout << "yo";
	 cout << endl;
}/*

   /*float zamienNaProcenty(float &wejscie){
   	wejscie *= 100;
   	cout << "wewnatrz funkcji " << wejscie << endl;
   	return wejscie;
   }*/
 
    double podzielPrzezLiczbeDni(double x){
    	x /= LDT;  // sta³a globalna kazda funkcja widzi ja
    	return x;
	}
 
    void obliczSredniaIWypisz(double tab[], int tab2[][LG]){
     for ( int g = 0; g<LG ; g++ ) { 
     tab[g]  = 0; 
     for ( int d = 0; d<LDT ; d++ )
        tab[g] += tab2[d][g] ;  
     tab[g] = podzielPrzezLiczbeDni(tab[g]); 
     cout << "O godzinie " << g + GP << ":00 kazdego dnia tygodnia "          << "jechalo srednio " << tab[g] << " pasazerow" << endl;  
  }
        	
	} 
	
	
		
	
	  
	void wypelnijTablice(int Bus[LDT][LG]){
   	for ( int dzien = 1 ; dzien<=LDT ; dzien++ ){
     for ( int godz = 0 ; godz < LG ; godz++  ){
      int  x = 0 + rand()%(50 + 1);
   	  Bus[LDT][LG] = x ;
   }
   }
  }
  
   
	
int main()
{  
    srand(time(NULL));	

  
  
  int Bus[LDT][LG];                                                                

  // --- (A) generowanie tablicy Bus

  
   
    


  // --- (B) wypisanie tablicy Bus na standardowe wyjscie

 cout << "   |" ;
  for ( int godz = GP; godz < GP + LG; godz++ )
     cout << setw(4) <<   godz  ; 
  cout << endl;  

  cout << "----" ;   
  for ( int godz = GP; godz < GP + LG; godz++ )
     cout << "----" ;
  cout << endl;

  for (int d=0; d< LDT; d++ ) {  
     cout << "D" << d+1  << " |"; 
     for ( int g =0; g< LG; g++)  
         cout << setw(4) <<  Bus[d][g]   ; 
     cout << endl  ; 
  }

  cout << "----" ;   
  for ( int godz = GP; godz < GP + LG; godz++ )
     cout << "----" ;
  cout << endl;

 
  // ------------------------------------------------------ podpunkt a) 
  // --- liczba pasazerow w ci¹gu tygodnia
  int suma = 0 ;               
  for (int d =0; d<LDT; d++ )  
     for (int g=0; g<LG; g++)  
          suma += Bus[d][g] ;  
   cout << " W tygodniu jechalo " << suma << " pasazerow" << endl;

  // --- liczba pasazerow kazdego dnia
  for ( int d =0; d<LDT; d++  ) {
    suma = 0 ;   
     for ( int g=0; g<LG; g++ )  
         suma += Bus[d][g] ;     
     cout << " dnia " <<  d+1 << " jechalo " << suma << " pasazerow" << endl;
  }
  


  // ------------------------------------------------------ podpunkt b) 
  // ---- maksymalna liczba pasazerow kazdego dnia
  
  for ( int d =0; d<LDT; d++ ) { 
  //znajdzMaximum(....)
      int  maximum =  Bus[d][0] ;
     for ( int g=0; g<LG; g++ )  
         if ( Bus[ d ][ g ] > maximum ) 
              maximum = Bus[d][g] ;  
     cout << d+1 << " dnia najwieksza liczba pasazerow to " <<maximum << endl;
  }
  /*
  // --------------------------------------------------------------------- podpunkt c) 
  // --- dla kazdego dnia - godzina, o której jechalo najmniej pasazerow 

  for (                ) {                                                 //$$$
     int min_godzina        ;                                              //$$$
     for (                )                                                //$$$
         if ( Bus[ ][ ] < Bus[ ][ ] )                                      //$$$
              min_godzina =        ;                                       //$$$
     cout <<         << " dnia najmniej pasazerow jechalo o godzinie "     //$$$
          << min_godzina +      << ":00" << endl;                          //$$$
  }
  
*/
  double Srednia[LG];
     obliczSredniaIWypisz(Srednia, Bus);
     cout << "dla indeksu 0: " << Srednia[0] << endl;
  // ----------------------------------------------------------- podpunkt d) 
  // --- œrednia liczba pasazerow dla kazdej godziny
  
 

/*
  // ----------------------------------------------------------- podpunkt e) 
  // --- sprawdzenie przekroczenia progu

   int     ;                                                           //$$$
   cout << "Podaj wartosc progowa: ";
           ;                                                           //$$$
        znaleziono =     ;                                             //$$$
        dzien =     ;                                                  //$$$
   while (           && (      <   )) {                                //$$$
     // --- przeszukiwanie k-tego wiersza
         godzina =  ;                                                  //$$$
     while (           && (      <   ))                                //$$$
         znaleziono = (Bus[ ][ ] > prog);                              //$$$
     dzien++;                                                          //$$$
   }
  
   if (        )                                                                         //$$$
      cout << "W dniu " << dzien << " liczba pasazerow przekroczyla " << prog << endl;
                                                                                         //$$$
      cout << "Kazdego dnia jechalo nie wiecej niz " << prog << " pasazerow" << endl;
*/
  return 0;
}
