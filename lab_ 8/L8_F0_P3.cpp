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
    plik.close();              //zamkniêcie pliku
    return 0;
}

// a)wypisze 4 liczby
// b)true do póki s¹ zmienne typu int, false gdy naptoka znak koñca pliku
// c)463 20
