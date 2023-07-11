//L8_F0_P4.cpp
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
    unsigned char txt[16];
    while(plik) {
        plik.read(reinterpret_cast<char*>(txt), 16);
        int len = plik.gcount();
        if(len==0) break;
        for(int i=0; i<len; i++) {
            cout << setfill('0') << setw(2) << hex << static_cast<int>(txt[i]) << " ";
        }
    	if(len % 16 != 0)
//    	plik.write(reinterpret_cast<char*>(txt), spacje);
    	for( int a = len ; a < 16;  a++)
    	cout << setfill(' ') << setw(3) << " ";
    	
        cout << "| ";
        for(int i=0; i<len; i++) {
            if(txt[i]=='\n' || txt[i]=='\r' || txt[i]=='\t' || txt[i]=='\b' || txt[i]=='\a')
                cout << '.';
            else
                cout << txt[i];
        }
		for( int a = len ; a < 16;  a++)
    	cout << ' ';
        cout << " |" << endl;
    }
    plik.close();
    return 0;
}

// a) program wypisuje na standarowdym wyjœciu liczyb i ich reprezenacji w systemie ASCII
// b) funkcja read s³u¿y do zapisywania z pliku binarnego danych
// c) funkcja gcount zwraca po³o¿enie atkualne wskaŸnika,na którym ztrzyma³a siê funkcja read
// d) znaki te oznaczaj¹ znaki znaki spejcalne ?
// e)	for(int i=len; i<16; i++)
// cout << setfill(' ') << setw(3) << " "; 	
