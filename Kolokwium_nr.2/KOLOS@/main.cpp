#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
const int w = 20;
const int kol = 8;
const int MAX_N=20;

struct Pomiar{
	int numer;
	float wartosc;
	float blad;
};
// A
void wys_tablicy(int T[20][8], int w, int k)
{
	cout << "Tablica: " << endl;
	for(int i = 0; i < w; i++)
		for(int j = 0; j < k; j++)
			cout << setw(5) <<  T[i][j];
	cout << endl;		
}
// B
void wyp_tablicy(int Tablica[20][8], int x, int y){
	for (int i = 0; i < x; i++)
	  for( int j = 0 ; j < y; j++)
	    Tablica[i][j] =  -10 + rand()%(10 - 10 + 1 );
}
//C
void pobior_danych(Pomiar Tab_Pomiar[] ){
	cout << "Podaj pomiary osoby:" << endl;
	cout << "Numer:" ;
	cin >> Tab_Pomiar[0].numer;
	cout << "Wartosc: ";
	cin >> Tab_Pomiar[0].wartosc;
	cout << "Blad: ";
	cin >> Tab_Pomiar[0].blad;
		
}
// D
float wartosc_x(Pomiar Tab_Pomiar[], float wartosc, float blad ){
	wartosc = Tab_Pomiar[0].wartosc;
	blad = Tab_Pomiar[0].blad;
	int x = pow(wartosc, 2)/pow(blad, 2);
	return x;
}
void wys_menu()
{
		cout << "MENU" << endl;
		cout << "Wybierz ‘a’ aby wyswietlic tablicey" << endl;
		cout << "Wybierz ‘b’ aby wypelnic tablice " << endl;
		cout << "Wybierz ‘c’ aby podaæ dane pomiaru" << endl;
		cout << "Wybierz ‘d’ aby obliczyæ x" << endl;
		cout << "Wybierz ‘e’ aby zakonczyc program" << endl;
}
// MENU;
void menu_main (int Tablica[20][8], Pomiar Tab_Pomiar[], float wartosc_x, char& wybor )
{  
  
  do {
     wys_menu();
     cin >> wybor;
     switch(wybor)
     {
       case 'a': wys_tablicy( Tablica, w, kol);
               break;
       case 'b': wyp_tablicy( Tablica, w, kol);
               break;
       case 'c': pobior_danych(Tab_Pomiar );
               break;
       case 'd': Wartosc_x =  wartosc_x(Tab_Pomiar, Tab_Pomiar[].wartosc_x, Tab_Pomiar[].blad );
               break;
       case 'e': cout << "Zakoncz program";
               break;
      
     }
  } while(wybor!='e'); 
}




int main() 
{
	int Tablica[20][8] = {0};
	srand(time(0));
	char wybor; 
	float Wartosc_x;
	Pomiar Tab_Pomiar[];
	menu_main(Tablica[][], Tab_Pomiar[], wartosc_x, wybor);
	return 0;
}

