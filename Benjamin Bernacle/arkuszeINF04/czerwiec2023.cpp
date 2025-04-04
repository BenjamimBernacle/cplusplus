#include <iostream>
using namespace std;

void wypelnijSito(int tablica[], int rozmiarTablicy) {
    for (int i = 0; i <= rozmiarTablicy; i++) {
        tablica[i] = 1; // zakładamy, że wszystkie liczby są pierwsze
    }

    tablica[0] = tablica[1] = 0; // 0 i 1 nie są pierwsze

    for (int i = 2; i * i <= rozmiarTablicy; i++) {
        if (tablica[i]) {
            for (int j = i * i; j <= rozmiarTablicy; j += i) {
                tablica[j] = 0; // nie jest pierwsza
            }
        }
    }
}
int main()

{
    int sito[100];
    wypelnijSito(sito, 100);

    cout << "Liczby pierwsze w przedziale 2..100: ";

    for (int i = 2; i <= 100; i++) {
        if (sito[i]) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}