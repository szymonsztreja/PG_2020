#include <iostream>

using namespace std;

	struct czlowiek{
	char nazwisko[30];
	char imie[30];
	char PESEL[12];
	struct czlowiek *ojciec;
	struct czlowiek *dzieci[10];
	//struct czlowiek *wnuki[10];
	};
	void wypisz(czlowiek x){
	 cout << x.nazwisko << " " << x.imie << " " << x.PESEL << endl;
	if(x.ojciec) cout << x.ojciec->imie << endl;
//	if(x.dzieci) cout << x.dzieci->imie << endl;
	for(czlowiek **y = x.dzieci; *y; y++)
	 cout << (*y)->imie << " " << endl;
	 cout << endl;
	 
	}
	
int main(){
	 
	 czlowiek x = {"Rom", "Wojtyla", "12272900001", NULL, {NULL}};
	 czlowiek dzieci[3] = 
	 {
	 {"Rom", "Jan", "12272900002", &x, {NULL}},
	 {"Rom", "Stanislaw", "12272900003", &x, {NULL}},
	 {"Rom", "Anna", "12272900004", &x, {NULL}}, 
	 };
	 czlowiek wnuki[1] =
	 {
	 {"Leom", "Zawodowiec", "123234155", &(dzieci[2]), {NULL}}
     };
	 x.dzieci[0] = dzieci;
	 x.dzieci[1] = dzieci + 1;
	 x.dzieci[2] = dzieci + 2;
	 //x.wnuki[0] = wnuki;
	
	 wypisz(dzieci[2]);
	 wypisz(x);
	 wypisz(wnuki[0]);
	return 0;
	} 
