//L8_F0_Z1.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plikIn("L8_F0_Z1a.dat", ios::binary);
    if(!plikIn) {
        cout << "Plik wejsciowy nie otwarty\n";
        return 0;
    }
    ofstream plikOut("L8_F0_Z1b.dat", ios::binary);
    if(!plikOut) {
        cout << "Plik wyjsciowy nie otwarty\n";
        return 0;
    }
    int liczba;
    plikIn.seekg(0, ios::end) ;      //przejd� na koniec pliku
    int lenPlik = plikIn.tellg();    //sprawd� wielko�� pliku
    // warto�� lenPlik powinna by� wielokrotno�ci� sizeof(int)
    lenPlik /= sizeof(int);    //liczba liczb w pliku
    while(lenPlik>0) {
        lenPlik--;
        plikIn.seekg(lenPlik*sizeof(int), ios::beg);
        plikIn.read( reinterpret_cast<char*>(&liczba), sizeof(int) );
        //wpisz liczb� do drugiego pliku
        plikOut.write( reinterpret_cast<char*>(&liczba), sizeof(int) );
    }
    plikOut.close();
    plikIn.close();
    return 0;
}
