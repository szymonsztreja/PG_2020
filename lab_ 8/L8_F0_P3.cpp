//L8_F0_P3.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("L8_F0_P1.txt");
    if(!plik) {
        cout << "Plik nie zostal otwarty\n";
        return 1;
    }
    int liczba;
    while(plik >> liczba) {        //wczytanie liczb z pliku
        cout << liczba << endl;
    }
    plik.close();              //zamkni�cie pliku
    return 0;
}

// a)wypisze 4 liczby
// b)true do p�ki s� zmienne typu int, false gdy naptoka znak ko�ca pliku
// c)463 20
