#include <iostream>

using namespace std;

string PIN;
int main()
{
    cout << "Witam  w naszym bankomacie!" << endl;
    cout << "Podaj numer PIN:  ";
    cin >> PIN;

    if(PIN=="8080")
    {
        cout << "Podano poprawny PIN!";
    }
    else
    {
           cout<< "Podano bledny PIN!";
    }



    return 0;
}
