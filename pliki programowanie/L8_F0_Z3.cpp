//L8_F0_Z3.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("L8_F0_Z3.txt");
    if(!plik) {
        cout << "Plik wejsciowy nie otwarty\n";
        return 0;
    }

    int cntTab[128];
    for(int i=0; i<128; i++)
        cntTab[i] = 0;
    char znak;

    while(plik>>znak) {
        if(0<=znak && znak<128)
            cntTab[static_cast<int>(znak)]++;
    }
    plik.close();
    for(int i='a'; i<='z'; i++)
        cout << "Litera " << static_cast<char>(i)
            << " wystepowala " << cntTab[i] << "raz(y)\n";
    for(int i='A'; i<='Z'; i++)
        cout << "Litera " << static_cast<char>(i)
            << " wystepowala " << cntTab[i] << "raz(y)\n";
    for(int i='0'; i<='9'; i++)
        cout << "Liczba " << static_cast<char>(i)
            << " wystepowala " << cntTab[i] << "raz(y)\n";
    return 0;
}
