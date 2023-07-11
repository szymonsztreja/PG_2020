#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int const MAX_N=1000;

int losowanie(int wylosowana)
{
	wylosowana=rand()%7+4;
    return wylosowana;
}

void tablica(int tab[], int wylosowana ){
	for(int i=0; i<MAX_N; i++){
	tab[i] = losowanie(wylosowana) ;
	cout <<setw(5)<< tab[i]; 
    } 
	 
}

void PiszTablice(int tab[]){
	for (int i=0; i<MAX_N; i++)
	cout << setw(5) << tab[i];
}


int main(){
	int tab[MAX_N];
	int wylosowana;
	srand(time(NULL));
	
//	losowanie(wylosowana);
//	int x=losowanie(wylosowana);

	tablica(tab, wylosowana);
	//PiszTablice(tab);
	
	
	
	
}
