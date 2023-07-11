//L8_F0_P1.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("L8_F0_P1.txt"); //otwarcie pliku o nazwie "L8_F0_P1.txt"
    if(!plik) {                    //sprawdzenie, czy plik zosta� otwarty
        cout << "Plik nie zostal otwarty\n";
        return 1;
    }
    int liczba;
    plik >> liczba;            //wczytanie liczby z pliku
    cout << liczba << endl;
    plik.close();              //zamkni�cie pliku
    return 0;
}


