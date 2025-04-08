// Założenia aplikacji:
// ‒ Zastosowany obiektowy język programowania zgodny z zainstalowanym na stanowisku
// egzaminacyjnym: C++ lub C#, lub Java, lub Python
// ‒ Tablica oraz operacje na niej wykonywane są implementowane z wykorzystaniem klasy
// ‒ Pola klasy:
// ‒ Tablica liczb całkowitych (ma być tradycyjną tablicą, a w Python listą)
// ‒ Liczba elementów tablicy zapisana jako liczba całkowita. Pole
// przechowuje faktyczną liczbę elementów. Wszystkie operacje
// są ograniczone wartością tego pola
// ‒ Oba pola są dostępne tylko w tej klasie oraz niedostępne dla
// klas potomnych
// ‒ Konstruktor klasy:
// ‒ Przyjmuje jako argument rozmiar tablicy
// ‒ Ustawia wartość pola liczby elementów tablicy na wartość
// argumentu
// ‒ Wypełnia tablicę, będącą polem klasy, pseudolosowymi
// liczbami całkowitymi z zakresu od 1 do 6
// ‒ Metody klasy:
// ‒ Wyświetlająca wszystkie elementy tablicy w postaci
// „<index_tablicy>: <wartość>”. Nie zwraca wartości
// ‒ Wyszukująca wszystkie wystąpienie wartości, przekazanej
// jako argument. Metoda zwraca indeksy szukanego elementu
// lub liczbę -1, gdy elementu nie znaleziono
// ‒ Wyświetlająca wszystkie wartości podzielne przez 3 z tablicy
// i zwracająca ich liczbę
// ‒ Licząca iloczyn wartości w tablicy i zwracająca
// tą wartość
// -Znajdującą wartości extremalne i zwracającą je.
// ‒ Wszystkie metody są dostępne poza klasą
// ‒ Program główny: 
// ‒ Tworzy obiekt klasy z rozmiarem tablicy większym od 10

// ‒ Sprawdza działanie wszystkich metod:

// ‒ Komunikacja z użytkownikiem musi być zrozumiała.
// ‒ Program powinien być zapisany czytelnie, z zachowaniem zasad czystego formatowania kodu
// ‒ Dla obiektów, pól, metod i zmiennych należy stosować znaczące nazewnictwo angielskie lub polskie.
// Dopuszcza się dla klasy i pola tablicowego nazewnictwo ogólne (np. tab, tablica, table) 

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
    Tablica(int MAX_ROZMIAR) {
        MAX_ROZMIAR = 100;
        this->MAX_ROZMIAR = MAX_ROZMIAR;   
        liczbaElementow = MAX_ROZMIAR;
        srand(time(nullptr));
        for (int i = 0; i < liczbaElementow; ++i) {
            tablica[i] = rand() % 6 + 1;
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

    int wyswietlPodzielnePrzez3() {
        int licznik = 0;
        for (int i = 0; i < liczbaElementow; ++i) {
            if (tablica[i] % 3 == 0) {
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
            iloczyn =iloczyn * tablica[i];
        }
        return iloczyn;
    }

    // void ekstremalneWartosci(int &min, int &max) {
    //     min = tablica[0];
    //     max = tablica[0];
    //     for (int i = 1; i < liczbaElementow; ++i) {
    //         min = (tablica[i] < min) ? tablica[i] : min;
    //         max = (tablica[i] > max) ? tablica[i] : max;
    //     }
    // }
     
    // int findMinIndex(int arr[], int start, int n) {
    //     int minIndex = start;
    //     for (int j = start + 1; j < n; j++) {
    //         if (arr[j] < arr[minIndex]) {
    //             minIndex = j;
    //         }
    //     }
    //     return minIndex;
    // }
    void findMinIndex(int &min, int &max) {
        min=tablica[0];
        max=tablica[0];
        for (int i = 1; i < liczbaElementow; i++) {
            if (tablica[i] < tablica[min]) {
                min = i;
            }
        }
        for (int j = 1; j < liczbaElementow; j++) {
            if (tablica[j] > tablica[max]) {
                max = j;
            }
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

    cout << "\nWartosci podzielne przez 3: ";
    cout << "Liczba takich elementow: " << tab.wyswietlPodzielnePrzez3() << endl;

    cout << "\nIloczyn wszystkich elementów: " << tab.iloczynElementow() << endl;

    int min, max;
    tab.findMinIndex(min, max);
    cout << "Minimalna wartosc: " << min << endl;
    cout << "Maksymalna wartosc: " << max << endl;

    return 0;
}
