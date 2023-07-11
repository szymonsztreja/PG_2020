//L8_F0_P4e.cpp
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream plik("L8_F0_P4b.dat", ios::binary);
    if(!plik) {
        cout << "Plik nie zostal otwarty\n";
        return 1;
    }
    unsigned char txt[18]; //u¿ywamy trochê wiêkszej tablicy ni¿ jest to konieczne
    while(plik) {
        plik.read(reinterpret_cast<char*>(txt), 16);
        int len = plik.gcount();
        if(len==0) break;
        for(int i=0; i<len; i++) {
            cout << setfill('0') << setw(2) << hex << static_cast<int>(txt[i]) << " ";
        }
        for(int i=len; i<16; i++)
            cout << setfill(' ') << setw(3) << " ";
        cout << "| ";
        for(int i=0; i<len; i++) {
            if(txt[i]=='\n' || txt[i]=='\r' || txt[i]=='\t' || txt[i]=='\b' || txt[i]=='\a')
                cout << '.';
            else
                cout << txt[i];
        }
        for(int i=len; i<16; i++)
            cout << ' ';
        cout << " |" << endl;
    }
    plik.close();
    return 0;
}
