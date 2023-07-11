#include <iostream>
#include <fstream>

using namespace std;
int main() {
    fstream plik("L8_F0_P5.txt", ios::in|ios::out|ios::trunc);
    if(!plik) {
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
    while(plik) {
        getline(plik, tekst);
        cout << tekst << "\n";
    }
    plik.close();
    return 0;
}
