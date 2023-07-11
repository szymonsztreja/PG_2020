//L8_F0_Z2.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream plik("L8_F0_Z2.dat", ios::binary|ios::in|ios::out);
    if(!plik) {
        cout << "Plik nie otwarty\n";
        return 0;
    }
    plik.seekg(0, ios::end);    // sprawdzenie d³ugoœæi pliku
    int lenPlik = plik.tellg()/sizeof(int); //liczba liczb w pliku
    int liczba;
    for(int i=0; i<lenPlik; i++) {
        plik.seekg(i*sizeof(int), ios::beg);
        plik.read( reinterpret_cast<char*>(&liczba), sizeof(int) );
        liczba = 2*liczba;
        plik.seekp(i*sizeof(int), ios::beg); //ustawiamy g³owicê w to samo miejsce
        plik.write( reinterpret_cast<char*>(&liczba), sizeof(int) );   //wpisujemy liczbê
    }
    plik.close();
    return 0;
}
