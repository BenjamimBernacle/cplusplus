#include <iostream>
using namespace std;
void wypelnijLosowo(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        srand(time(NULL) * (i + 1));
        tablica[i] = (rand() % 17)+2;
    }
}
void wypiszTablice(int tablica[], int rozmiarTablicy)
{
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        cout << tablica[i] << ", ";
    }
}
double srednia(int tablica[],int rozmiarTablicy){
    int suma = 0;
    for (int i = 0; i < rozmiarTablicy; i++)
    {
        suma+=tablica[i];

    }
    double srednia= suma/(double)rozmiarTablicy;
    return srednia;
}
int main(){
    int tablica[15];
    wypelnijLosowo(tablica, 15);
    cout << "tablica 1: ";
    wypiszTablice(tablica, 10);
    cout << endl;
    cout<<"średnia to: " << srednia(tablica,15);
    return 0;
}