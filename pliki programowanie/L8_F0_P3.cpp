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
