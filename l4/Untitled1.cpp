#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <cstddef>
#include <stdlib.h>

using namespace std;

struct Miasto_Ilosc{
	string miasto;
	int ilosc;
};

struct Towar_k{
	string nazwa;
	double cena;
	string id_towaru;
	list<Miasto_Ilosc> miasta;
};

list<Towar_k> Towary; 

void printAll(){
	for(int i = 0 ; i < Towary.size() ; i++){
		Towar_k t = Towary.front();
		cout << "nazwa:" << t.nazwa << " cena:" << t.cena << endl;
		for(int v = 0 ; v < t.miasta.size() ; v++){
			Miasto_Ilosc mi = t.miasta.front();
			cout << mi.miasto << " sumaryczna cena:" << mi.ilosc * t.cena << endl;
			t.miasta.pop_front();
			t.miasta.push_back(mi);
		}
		Towary.pop_front();
		Towary.push_back(t);
		cout << endl;
	}
}

void getQuantity(string towarid, string id, int quantity){
	string path_transakcje = "klienci.txt";

	fstream plik1;
	string linia;
	string miasto1;

  plik1.open(path_transakcje.c_str(), ios::in);
	if(plik1.good()==true){ 

		linia.erase(0,linia.find_first_of(" ")+1);
		linia.erase(0,linia.find_first_of(" ")+1);
		miasto1 = linia.substr(0,linia.find_first_of(" "));
	

    while(!plik1.eof())
    {
		getline(plik1, linia);
	
		if(towarid == linia.substr(0,linia.find_first_of(" "))){
		linia.erase(0,linia.find_first_of(" ")+1);
		linia.erase(0,linia.find_first_of(" ")+1);
		miasto1 = linia.substr(0,linia.find_first_of(" "));

		for(int i = 0 ; i < Towary.size(); i++){
    Towar_k t = Towary.front();

			if(t.id_towaru==id){
				Miasto_Ilosc mi;
				mi.miasto = miasto1;
				mi.ilosc = quantity;
				t.miasta.push_front(mi);
			}

    Towary.pop_front();
    Towary.push_back(t);
 		}
	}		
	}
	}

	plik1.close();

}


int main() {

	string path_towary = "towary.txt";
	string linia;

	fstream plik;
    plik.open(path_towary.c_str(), ios::in);

    if(plik.good()==true){ 
		
		Towar_k towar;
		getline(plik, linia);

		towar.id_towaru = linia.substr(0,linia.find_first_of(" "));
		linia.erase(0,linia.find_first_of(" ")+1);
		towar.nazwa = linia.substr(0,linia.find_first_of(" "));
		linia.erase(0,linia.find_first_of(" ")+1);
		towar.cena = stod((linia.substr(0,linia.find_first_of(" "))).c_str());
	
		Towary.push_front(towar);

		//Towary.insert()
    while(!plik.eof())
    {

		getline(plik, linia);
		
		towar.id_towaru = linia.substr(0,linia.find_first_of(" "));
		linia.erase(0,linia.find_first_of(" ")+1);
		towar.nazwa = linia.substr(0,linia.find_first_of(" "));
		linia.erase(0,linia.find_first_of(" ")+1);
		towar.cena = stod(linia.substr(0,linia.find_first_of(" ")));	Towary.push_front(towar);
		    
		}
	}
	plik.close();

	string path_transakcje = "transakcje.txt";
	
  plik.open(path_transakcje.c_str(), ios::in);
	if(plik.good()==true){ 
    while(!plik.eof())
    {
		getline(plik, linia);
		
		string id;
		string towar_t;
		int quantity;
		id = linia.substr(0,linia.find_first_of(" "));
		linia.erase(0,linia.find_first_of(" ")+1);
		towar_t = linia.substr(0,linia.find_first_of(" "));		
		linia.erase(0,linia.find_first_of(" ")+1);
		quantity = stoi(linia.substr(0,linia.find_first_of(" ")));
		getQuantity(id ,towar_t, quantity);
		
		}
	}
		printAll();

	plik.close();
	
}
