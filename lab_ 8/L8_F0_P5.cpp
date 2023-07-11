#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream plik("L8_F0_P5.txt", ios::in|ios::out|ios::trunc);
 	if(!plik) 
	{
 	cout << "Plik nie zostal otwarty\n";
 	return 1;
	}
 	string tekst;
 		cout << "Wpisz tekst:\n";
		 while(cin) {
 		getline(cin, tekst);
 		plik << tekst << "\n";
 		}
 	plik.seekg(0);
 	while(plik) 
	 {
 		getline(plik, tekst);
 		cout << tekst << "\n";
	 }
 plik.close();
 return 0;
}

// A) klasa ofstream ob³suguje zapisywanie do pliku wyjœciowego. Domyœlnym dla niej jest otwieranie w trybie do zapisu,
// jak i tworzenie pliku je¿eli nie istnia³ albo czyszczony gdy ju¿ istnia³
// B) trzeba dodaæ argumenty "ios::app" i "ios::ate" pierwszy pozowli na dodawanie do istniejacego ju¿
// pliku znaków a drugi ustawi wskaŸnik zapisywania na jego koniec.
// C) 
