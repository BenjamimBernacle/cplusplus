#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class TablicaLiczb
{
private:
    int tablica[100];
    int rozmiar;

public:
    TablicaLiczb(int rozmiar)
    {
        this->rozmiar = rozmiar;

        srand(time(0));
        for (int i = 0; i < rozmiar; i++)
        {

            tablica[i] = rand() % 1000 + 1;
        }
    }


    void wyswietl() 
    {
        for (int i = 0; i < rozmiar; i++)
        {
            cout << i << ": " << tablica[i] << endl;
        }
    }

  
    int znajdzPierwszy(int wartosc)
    {
        for (int i = 0; i < rozmiar; i++)
        {
            if (tablica[i] == wartosc)
            {
                return i;
            }
        }
        return -1;
    }

    
    int wyswietlNieparzyste() 
    {
        int liczbaNieparzystych = 0;
        for (int i = 0; i < rozmiar; i++)
        {
            if (tablica[i] % 2 != 0)
            {
                cout << tablica[i] << endl;
                liczbaNieparzystych++;
            }
        }
        return liczbaNieparzystych;
    }

  
    double srednia() 
    {
        int suma = 0;
        for (int i = 0; i < rozmiar; i++)
        {
            suma += tablica[i];
        }
        return static_cast<double>(suma) / rozmiar;
    }
};


int main()
{
 
    TablicaLiczb tablica(25);

  
    cout << "Wszystkie elementy tablicy:" << endl;
    tablica.wyswietl();

  
    int szukana;
    cout << "\nPodaj liczbę do wyszukania: ";
    cin >> szukana;
    int indeks = tablica.znajdzPierwszy(szukana);
    if (indeks != -1) {
        cout << "Znaleziono element " << szukana << " na indeksie: " << indeks << endl;
    } else {
        cout << "Nie znaleziono elementu " << szukana << " w tablicy." << endl;
    }

  
    cout << "\nLiczby nieparzyste w tablicy:" << endl;
    int liczbaNieparzystych = tablica.wyswietlNieparzyste();
    cout << "Liczba liczb nieparzystych: " << liczbaNieparzystych << endl;

    
    double srednia = tablica.srednia();
    cout << "\nŚrednia arytmetyczna wartości w tablicy: " << srednia << endl;

    return 0;
}
