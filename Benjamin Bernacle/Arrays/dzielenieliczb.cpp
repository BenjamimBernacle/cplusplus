#include <iostream>
#include <cstdlib>

using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = rand() % 17 + 7;
    }
}

void iloscLiczbPodzielnych(int tablica[],int dzielnik,int rozmiarTablicy,int &liczbaPodzielnych){
    for (int i = 0; i < rozmiarTablicy; i++)
        {
            if (tablica[i] % dzielnik == 0)
            {
                liczbaPodzielnych += 1;
            }
        }
}

int main()
{
    int tablica[20];

    int iloscDzielnikow;
    wypelnijLosowo(tablica, 20);
    iloscLiczbPodzielnych(tablica,3,20,iloscDzielnikow);

    cout<<"Ilość liczb podzielnych przez 3 : "<<iloscDzielnikow;

    return 0;
}