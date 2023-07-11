#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream plik("L8_F0_P5.txt");
    if(!plik) {
        cout << "Plik nie zostal otwarty\n";
        return 1;
    }
    string tekst;
    cout << "Wpisz tekst: ";
    while(cin >> tekst)
        plik << tekst << "\n";
    plik.close();
    return 0;
}
