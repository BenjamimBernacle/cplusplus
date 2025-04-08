#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Tablica {
private:
    int tablica[100];
    int liczbaElementow;
    int MAX_ROZMIAR;

public:
    // Konstruktor
    Tablica(int rozmiar) {
        MAX_ROZMIAR = 100;
    
        while (rozmiar > MAX_ROZMIAR) {
            rozmiar = MAX_ROZMIAR;
        }
    
        liczbaElementow = rozmiar;
        srand(time(nullptr));
        for (int i = 0; i < liczbaElementow; ++i) {
            tablica[i] = rand() % 6 + 1; // losowe od 1 do 6
        }
    }
    

    void wyswietlElementy() {
        for (int i = 0; i < liczbaElementow; ++i) {
            cout << i << ": " << tablica[i] << endl;
        }
    }

    void wyszukajWartosc(int wartosc) {
        bool znaleziono = false;
        for (int i = 0; i < liczbaElementow; ++i) {
            if (tablica[i] == wartosc) {
                cout << "Znaleziono na indeksie: " << i << endl;
                znaleziono = true;
            }
        }
        cout << (znaleziono ? "" : "-1 (nie znaleziono wartosci)\n");
    }

    int wyswietlPodzielnePrzez7() {
        int licznik = 0;
        for (int i = 0; i < liczbaElementow; ++i) {
            if (tablica[i] % 7 == 0) {
                cout << tablica[i] << " ";
                licznik++;
            }
        }
        cout << endl;
        return licznik;
    }

    int iloczynElementow() {
        int iloczyn = 1;
        for (int i = 0; i < liczbaElementow; ++i) {
            iloczyn *= tablica[i];
        }
        return iloczyn;
    }

    void ekstremalneWartosci(int &min, int &max) {
        min = tablica[0];
        max = tablica[0];
        for (int i = 1; i < liczbaElementow; ++i) {
            min = (tablica[i] < min) ? tablica[i] : min;
            max = (tablica[i] > max) ? tablica[i] : max;
        }
    }
};

// Program główny
int main() {
    int rozmiar = 12;
    Tablica tab(rozmiar);

    cout << "Elementy tablicy:" << endl;
    tab.wyswietlElementy();

    cout << "\nPodaj wartosc do wyszukania: ";
    int szukana;
    cin >> szukana;
    tab.wyszukajWartosc(szukana);

    cout << "\nWartosci podzielne przez 7: ";
    int ile7 = tab.wyswietlPodzielnePrzez7();
    cout << "Liczba takich elementow: " << ile7 << endl;

    cout << "\nIloczyn wszystkich elementów: " << tab.iloczynElementow() << endl;

    int min, max;
    tab.ekstremalneWartosci(min, max);
    cout << "Minimalna wartosc: " << min << endl;
    cout << "Maksymalna wartosc: " << max << endl;

    return 0;
}
