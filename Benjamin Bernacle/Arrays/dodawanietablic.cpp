#include <iostream>
#include <cstdlib>
using namespace std;
int rozmiar_tablicy = 5; 

void wypelnijlosowymi(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 10; 
    }
}

void dodajtablice(int tablica1[],  int tablica2[], int wynik[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        wynik[i] = tablica1[i] + tablica2[i];
    }
}

void wyswietltablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int rozmiar_tablicy=10;
    int tablica1[rozmiar_tablicy];
    int tablica2[rozmiar_tablicy];
    int wynik[rozmiar_tablicy];

    wypelnijlosowymi(tablica1, rozmiar_tablicy);
    wypelnijlosowymi(tablica2, rozmiar_tablicy);

    cout << "Tablica 1: ";
    wyswietltablice(tablica1, rozmiar_tablicy);

    cout << "Tablica 2: ";
    wyswietltablice(tablica2, rozmiar_tablicy);

    dodajtablice(tablica1, tablica2, wynik, rozmiar_tablicy);

    cout << "Wynik: ";
    wyswietltablice(wynik, rozmiar_tablicy);
    
}
