// POP 2021-01-12 Projekt 1 Sztreja Szymon EiT 3 184585
// Dev-C++ 5.11 TDM_GCC 4.9.2 64-bit Realease

#include<iostream>
#include<fstream>
#include<istream>
#include<string.h>
#include <cstdlib>
#include <bitset>
#include <math.h>

using namespace std;

const int MAX_N = 63;
const int MAX_NAZW = 80;
const int bajty = 3;
const int co_ile = 6;

char tab_base64( int klucz);
int zamianaNaInt(char array[], int size);
string zamianaNaBity(ifstream& plik_wejsciowy);
//char* zwrocAdres(string Bit);
//void po3bajty(char *nazwa_in, ifstream& plik_wejsciowy, ofstream& plik_wyjsciowy, int &k, long &size1);

int main() 
{
	char nazwa_in[MAX_NAZW];
	char nazwa_out[MAX_NAZW];
	char extension[] = ".txt";									// rozszerzenie do nazw plików

	
	ifstream plik_wejsciowy;									// definicja obiektu klasy ifstream
	ofstream plik_wyjsciowy;									// definicja obiektu klasy ofstream

	cout << "Podaj nazwe pliku wejsciowego: " << endl;
	cin >> nazwa_in;
	strcat(nazwa_in, extension);								// dodanie do koñca nazwy pliku ".txt"
	plik_wejsciowy.open(nazwa_in, ios::in | ios::binary );
	if(!plik_wejsciowy)
	{
		cerr << "Nieudane otwarcie pliku " << nazwa_in << "!" << endl;
		system("pause");
		return 1;
	}	
	plik_wejsciowy.seekg(0,plik_wejsciowy.end);
	long size = plik_wejsciowy.tellg();							// pobranie d³ugoœci pliku
	plik_wejsciowy.seekg(0);

	
	cout << "Podaj nazwe pliku wyjsciowego: " << endl;
	cin >> nazwa_out;
	strcat(nazwa_out, extension);
	plik_wyjsciowy.open(nazwa_out , ios::binary);				// otwarcie binarnie 
	if(!plik_wyjsciowy)
	{
		cerr << "Nieudane otwarcie pliku " << nazwa_out << "!" << endl;
		system("pause");
		return 1;
	}
	if( size % 3 == 0)													// warunki na dodanie "pad"
		{
			plik_wejsciowy.open(nazwa_in, ios::in | ios::binary );
		}
	if( size % 3 == 1)
		{
			plik_wejsciowy.open(nazwa_in, ios::in | ios::binary | ios::app );
			plik_wyjsciowy.write("=" , ios::end);

		}
	if( size % 3 == 2)
		{
			plik_wejsciowy.open(nazwa_in, ios::in | ios::binary | ios::app );
			plik_wyjsciowy.write("==" , ios::end);
		}
	int k = 0;
	while( size > k)
	{
	char *teb;
	int intiger;
	string Bit, bit1, bit2, bit3;
	plik_wejsciowy.seekg(k);										// ustawienie  wskaŸnika pobierania na poczatek pliku										
	char *buffer = new char[bajty];	
	plik_wejsciowy.read(buffer,bajty);								// otworzenie do odczytu pliku
	plik_wejsciowy.close();	
	
	char *ciag = new char[8];
																																								
	for ( int i = 0; i < bajty; i++)
	{
//		Bit += bitset<8>(*(buffer+i)).to_string();					// dodanie do siebie kolejnych 3 znaków w formie 8 bitowej w stringu 
		for(int a = 0; a<bajty; a++)
		strcpy((ciag+a), bitset<8>(*(buffer+i)).to_string());
	}
		for (int b= 0 ; b<8;b++)
		{
			if( ciag[b] == '1' )
			ciag_n[b] = '0';
			else 
			ciag_n[b] = '1';
		}

		cout << bit1 << "  ";

	char ciag[8];
	char ciag_n[8];
	
	for ( int x = 0 ; x<bajty ; x++)
	strcpy(ciag, bit1.c_str());	
		for (int b= 0 ; b<8;b++)
		{
			if( ciag[b] == '1' )
			ciag_n[b] = '0';
			else 
			ciag_n[b] = '1';
		}
 
		for(int a= 0 ; a<8; a++)
		cout << ciag_n;

		delete[] buffer;
		buffer = NULL;
		
		
	
	int dl = Bit.length();
	char char_array[dl];
	
	strcpy(char_array, Bit.c_str());
    	
	for(int i = 0; i < 4; i++) 
	{
		char array[6];
		for(int j = 0; j < co_ile; j++) 
		{
			array[j] = char_array[i * co_ile + j];					// zapisanie do 4 tablic 
		}

		intiger = zamianaNaInt(array, 6);						// zamiana tablicy char na sta³¹
		cout << tab_base64(intiger);								// szyfrowanie base 64
	}
//	for (int d=0; d<4;d++)
//	{
//	 		*(teb+d) = tab_base64(intiger);
//	 		cout << *(teb+d);
//	}
//	plik_wyjsciowy.write(teb,4);
	k+=3;
	}
	plik_wyjsciowy.close();


	return 0;	
}


//void po3bajty(char *nazwa_in, ifstream& plik_wejsciowy, ofstream& plik_wyjsciowy, int &k, long &size1)
//{
//	char extension[] = ".txt";
//	cout << "Podaj nazwe pliku wejsciowego: " << endl;
//	cin >> nazwa_in;
//	
//	string c = "=";
//	strcat(nazwa_in, extension);								// dodanie do koñca nazwy pliku ".txt"
//	if( size1 % 3 == 0)
//	{
//	plik_wejsciowy.open(nazwa_in, ios::in | ios::binary );
//	}
//	if( size1 % 3 == 1)
//	{
//	plik_wejsciowy.open(nazwa_in, ios::in | ios::binary | ios::app );
//	plik_wejsciowy.seekg(0 , ios::end);
//	
//	}
//	if( size1 % 3 == 2)
//	{
//	plik_wejsciowy.open(nazwa_in, ios::in | ios::binary | ios::app );
//	plik_wejsciowy << cc;
//	}
//	
//	if(!plik_wejsciowy)
//	{
//		cerr << "Nieudane otwarcie pliku " << nazwa_in << "!" << endl;
//		system("pause");
//		return 1;
//	}
//		
//	cout << "Podaj nazwe pliku wyjsciowego: " << endl;
//	cin >> nazwa_out;
//	strcat(nazwa_out, extension);
//	plik_wyjsciowy.open(nazwa_out , ios::binary);
//	if(!plik_wyjsciowy)
//	{
//		cerr << "Nieudane otwarcie pliku " << nazwa_out << "!" << endl;
//		system("pause");
//		return 1;
//	}
//	string zamianaNaBity(ifstream& plik_wejsciowy, k);
//	char *Adres = zwrocAdres( string zamianaNaBity(ifstream& plik_wejsciowy) );
//	plik_wyjsciowy.write( Adres,4 );
//	plik_wejsciowy.close();	
//}
//
//char* zwrocAdres(string Bit)
//{
//	int dl = Bit.length();
//	char char_array[dl];
//	char array[6];
//	int Liczba[4];
//	char intToChar[1];
//	strcpy(char_array, Bit.c_str());
//    for (int i = 0; i < dl; i++)
//    	cout << char_array[i] ;
// 	
//	for(int i = 0; i < 4; i++) 
//	{
//		for(int j = 0; j < co_ile; j++) 
//		{
//			array[j] = char_array[i * co_ile + j];
//		}
//	}
//	for(int a = 0; a < 4 ; a++)
//	{
//		int Liczba[a] = zamianaNaInt(array, 6);
//	}
//	for(int b = 0; b < 4 ; b++)
//	{
//		intToChar[b] = tab_base64( *(Liczba+b) );
//	}
//
//	return intToChar;
//}

//string zamianaNaBity(ifstream& plik_wejsciowy, k)
//{
//	string Bit;
//	char *buffer = new char[bajty];	
//	plik_wejsciowy.read(buffer+k,bajty);																																			
//	for ( int i = 0; i < bajty; i++)
//	{
//	Bit += bitset<8>(*(buffer+i)).to_string();
//	}
//	for ( int i = 0; i < bajty; i++)
//	{
//		delete[] buffer;
//		buffer = NULL;
//	}
//		return Bit;
//}	
//	
int zamianaNaInt(char array[], int size) 
{
	int ret = 0;
	for(int i = 0; i < size; i++){
		int j = -1;
		if(array[i] == '1'){
			j = 1;
		}else{
			j = 0;
		}
		ret += j * pow(2, size - i - 1);
	}
	return ret;
}	 		

char tab_base64(int intiger)
{
	char tab[MAX_N], znak;
	ifstream ifs;
	ifs.open("tabelka.txt", ios::in);
	if(!ifs)
	{
		cerr << "Nieudane otwarcie pliku " << endl;
		system("pause");
		return 1;
	}
	for ( int i = 0; i <= MAX_N; i++)
	{
		ifs >> tab[i];
	}

	ifs.close();
	return tab[intiger];; 
}

