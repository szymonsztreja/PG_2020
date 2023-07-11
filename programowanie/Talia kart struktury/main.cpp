#include<iostream>
#include <time.h>
#include <stdlib.h>



using namespace std;

const int LK = 52;

struct t_karta{
       int kolor;
       int figura;
};




void gen_kart(t_karta talia[]){


	for( int kolor = 1; kolor <=4 ; kolor++ )	
	 for( int figura = 1; figura <= 13; figura++ ) {
	 	int i = 0;
	 talia[i].kolor = kolor;
	 talia[i].figura = figura;
	 i++;
 	}
}

void wypisz(t_karta talia[]){

		for( int kolor = 1; kolor <=4 ; kolor++ )	
	 for( int figura = 1; figura <= 13; figura++ ) {
	 		int i;
	 cout << talia[i].kolor << "\t";
	 cout << talia[i].figura << "\t";
}
}
//void tasuj_karty(t_karta talia[])
//{
//	for(int i = 0)
//}

int main()
{
	srand(time(NULL));
	t_karta talia[LK];
	
	gen_kart(talia);
	wypisz(talia);
	
    
 

    system("pause");
    return 0;
}
