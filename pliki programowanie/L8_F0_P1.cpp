#include <iostream>


struct Lista
{
    Lista * ogon;
    int liczba;
};

// Wypisz wszystkie elementy listy
void wypisz( Lista * lista )
{
    // Przechodzenie po liœcie *rekurencyjnie*
    if( lista )
    {
        std::cout << lista->liczba << ", ";
        wypisz( lista->ogon );
    }
}


// Zwróæ: wskaŸnik na ostatni element listy
Lista * ostatni( Lista * lista )
{
    // Przechodzenie po liœcie *iteracyjnie*
    if( lista )
    while( lista->ogon )
         lista = lista->ogon;
   
    return lista;
}


// Dodaj element na koniec listy
void dodajKoniec( Lista *& lista, int liczba )
{
    // Tworzymy nowy element listy
    Lista * nowy = new Lista;
    nowy->liczba = liczba;
    nowy->ogon = nullptr;
   
    // Dopisujemy na koniec
    if( lista )
         ostatni( lista )->ogon = nowy;
    else
         lista = nowy;
   
}


// Usuwa listê
void zniszcz( Lista *& lista )
{
    while( lista )
    {
        Lista * tmp = lista;
        lista = lista->ogon;
        delete tmp;
    }
   
    lista = nullptr;
}


int main()
{
    int liczba;
    Lista * lista = nullptr;
    std::cout << "Podaj liczby, 0 lub blad konczy:\n";
   
    while( std::cin >> liczba && liczba )
         dodajKoniec( lista, liczba );
   
    std::cout << "Koniec, oto liczby:\n";
    wypisz( lista );
    zniszcz( lista );
}
