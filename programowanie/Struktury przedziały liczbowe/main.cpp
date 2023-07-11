#include <iostream>

using namespace std;

struct przedzial{
	double prawy_koniec;
	double lewy_koniec;
};

void zawieranie_sie(przedzial T_pierwszy[], przedzial T_drugi[])
{
	if(T_pierwszy[0].lewy_koniec <= T_drugi[0].lewy_koniec && T_pierwszy[1].prawy_koniec >= T_drugi[1].prawy_koniec )
	cout << "Przedzial 1 zawiera przedzial 2.";
	else if(T_pierwszy[0].lewy_koniec >= T_drugi[0].lewy_koniec && T_pierwszy[1].prawy_koniec <= T_drugi[1].prawy_koniec )
	cout << "Przedzial 2 zawiera przedzial 1.";
	else if(T_pierwszy[0].lewy_koniec < T_drugi[0].lewy_koniec && T_pierwszy[1].prawy_koniec < T_drugi[0].lewy_koniec )
	cout <<"Przedzialy sa rozloczne.";
	else if(T_pierwszy[0].lewy_koniec > T_drugi[0].lewy_koniec && T_pierwszy[0].lewy_koniec > T_drugi[0].lewy_koniec )
	cout <<"Przedzialy sa rozloczne.";
	else
	cout <<"Przedzialy maja inne polozenie.";
}

int main() 
{
	const int MAX_T = 2; // maksymalny rozmiar tablicy przedzial.
	przedzial T_pierwszy[MAX_T];
	przedzial T_drugi[MAX_T];
	cout << "Podaj 1 przedzial : " << endl;
	cout << "Lewy koniec: ";
	cin >>	T_pierwszy[0].lewy_koniec;
	cout << "Prawy koniec: ";
	cin >>	T_pierwszy[1].prawy_koniec;
// Drugi przedzial.	
	cout << "Podaj 2 przedzial : " << endl;
	cout << "Lewy koniec: ";
	cin >>	T_drugi[0].lewy_koniec;
	cout << "Prawy koniec: ";
	cin >>	T_drugi[1].prawy_koniec;
	
    zawieranie_sie(T_pierwszy, T_drugi);
	return 0;
}
