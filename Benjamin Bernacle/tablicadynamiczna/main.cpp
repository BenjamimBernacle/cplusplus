
#include <iostream>
#include "operacje.h"
using namespace std;

int main()
{
    int liczbaOcen;
    cout << "Podaj liczbę ocen: ";
    cin >> liczbaOcen;

    Ocena *tablicaOcen = utworzTabliceOcen(liczbaOcen);
    pobierzDane(tablicaOcen, liczbaOcen);
    double srednia = obliczSrednia(tablicaOcen, liczbaOcen);

    cout << "Średnia ocen: " << srednia << endl;

    return 0;
}