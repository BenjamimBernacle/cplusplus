#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wypelnijTablice(int arr[], int n) {
    for (int i = 0; i < n; i++) {
    srand(time(NULL) * (i + 1));
    arr[i] = (rand() %  100 + 1); // Wypełnienie pseudolosowymi wartościami 1-100
    }
}


int przeszukajTablice(int arr[], int n, int x) {
    arr[n] = x; // Dodanie wartownika
    int i = 0;
    while (arr[i] != x) {
        i++;
    }
    return (i == n) ? -1 : i; // Sprawdzenie, czy znaleziono w oryginalnej tablicy
}

void wyswietlTablice(int arr[], int n) {
    cout << "Tablica zawiera następujące liczby: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    const int ROZMIAR = 50;
    int arr[ROZMIAR + 1]; // Powiększona tablica na wartownika
    
    cout << "Program wyszukuje liczbę w 50-elementowej tablicy losowych liczb z zakresu 1-100.\n";
    wypelnijTablice(arr, ROZMIAR); // Wypełnienie tablicy
    
    int x;
    cout << "Podaj liczbę do wyszukania: ";
    cin >> x;
    
    int index = przeszukajTablice(arr, ROZMIAR, x);
    
    wyswietlTablice(arr, ROZMIAR);
    
    if (index != -1) {
        cout << "Liczba " << x << " została znaleziona na indeksie: " << index << "." << endl;
    } else {
        cout << "Liczba " << x << "adam nie została znaleziona w tablicy." << endl;
    }

    return 0;
}
