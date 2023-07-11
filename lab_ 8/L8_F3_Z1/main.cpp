#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	ifstream plikIn("L8_F3_Z1.txt.", ios::binary);
	if(!plikIn)
	{
		cout << " Nieudane otwarcie pliku wejsciowego" ;
		return 0;
	}
	
	int liczba;
	plikIn.seekg(0, ios::end);
	int lenPlik = plikIn.tellg()/sizeof(int);
	cout << lenPlik;
	return 0;
}
