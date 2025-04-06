#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcja losująca rzut kostkami
void losujKostki(int liczbaKostek, int wyniki[]) {
    for (int i = 0; i < liczbaKostek; i++) {
        wyniki[i] = rand() % 6 + 1;
    }
}

// Funkcja licząca punkty
int policzPunkty(int wyniki[], int liczbaKostek) {
    int licznik[7] = {0}; // indeksy 1-6

    for (int i = 0; i < liczbaKostek; i++) {
        licznik[wyniki[i]]++;
    }

    int suma = 0;
    for (int i = 1; i <= 6; i++) {
        if (licznik[i] >= 2) {
            suma += licznik[i] * i;
        }
    }

    return suma;
}

int main() {
    srand(time(0));
    char decyzja = 't';

    while ( decyzja == 't') {
        int liczbaKostek = 0;

        while( liczbaKostek < 3 || liczbaKostek > 10) {
            cout << "Podaj liczbe kostek (3-10): ";
            cin >> liczbaKostek;
        }

        int wyniki[10];
        losujKostki(liczbaKostek, wyniki);

        cout << "Wyniki rzutu:" << endl;
        for (int i = 0; i < liczbaKostek; i++) {
            cout << "Kostka " << i + 1 << ": " << wyniki[i] << endl;
        }

        
        cout << "Suma punktow: " << policzPunkty(wyniki, liczbaKostek) << endl;

        cout << "Czy chcesz zagrac ponownie? (t/n): ";
        cin >> decyzja;
    }

    cout << "Koniec gry." << endl;
    return 0;
}