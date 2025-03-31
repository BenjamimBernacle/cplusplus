
#include <iostream>
#include <string>
using namespace std;
class Dystrybutor
{
private:
    int iloscWody;
    int totalNalanaWoda{};
    int pojemnosc{};
    string kolorDystrybutora;
    bool czyMaCieplaWode;
    static int liczbaDystrybutorow;

public:
    Dystrybutor(int iloscWody, int pojemnosc, string kolorDystrybutora, bool czyMaCieplaWode)
    {
        this->iloscWody = iloscWody;
        this->pojemnosc = pojemnosc;
        this->kolorDystrybutora = kolorDystrybutora;
        this->czyMaCieplaWode = czyMaCieplaWode;
        liczbaDystrybutorow++;
    }
    void nalejDoKubka(int ile)
    {
        if (iloscWody >= ile)
        {
          
            totalNalanaWoda += ile;
            iloscWody -= ile;
        }
        else
        {
            cout << "nie mam tyle wody ale i tak naleje" << endl;
            totalNalanaWoda += ile;
            iloscWody -= ile;
        }
    }
    void uzupelnijWode()
    {
        iloscWody = pojemnosc;
        cout<<"jaca";
    }
    void setPojemnosc(int pojemnosc)
    {
        this->pojemnosc = pojemnosc;
    }
    void setKolorDystrybutora(string kolor)
    {
        kolorDystrybutora = kolor;
    }
    void setCzyMaCieplaWode(bool czyCiepla)
    {
        czyMaCieplaWode = czyCiepla;
    }
    void wypiszInfomacjeODystrybutorze()
    {
        cout <<"\nINFORMACJO O DYSTRYBUTORZE\n"
             << "------------------------\n"
             << "ilosc wody w dystrybutorze:  " << iloscWody
             << "\n----------------------\n"
             << "ogolnie to nalales tyle wody:" << totalNalanaWoda
             << "\n----------------------\n"
             << "kolor dystrybutora to:" << kolorDystrybutora
             << "\n----------------------\n"
             << "liczba Dystrybutorow stworzona:" << liczbaDystrybutorow
             << "\n----------------------\n";
        if (czyMaCieplaWode = true)
        {
            cout << "MAMY NAGRZOTE\n";
        }
        else
        {
            cout << "cieplo jest pij zimna\n";
        }
    }
};
int Dystrybutor::liczbaDystrybutorow{};
int main()
{
    char wybor;
    int ileWodyNalales{};
    

    cout << "Chcesz nalac wody?(Y-yes | N-no)\n ";
    cin >> wybor;

    if (wybor == 'y' || wybor == 'Y')
    {
   
  
        cout << "\nile chcesz nalac wody?\n";
        cin >> ileWodyNalales;
        Dystrybutor woda(1000, 5000, "czerwony", true);
        woda.uzupelnijWode();
        woda.nalejDoKubka(ileWodyNalales);
        woda.wypiszInfomacjeODystrybutorze();
    }

    else if (wybor == 'n' || wybor == 'N')
    {
        cout << "Wybrałeś Nie." << endl;
        Dystrybutor woda(1000, 5000, "czerwony", true);
        woda.wypiszInfomacjeODystrybutorze();
    }

    else
    {
        cout << "Nieprawidłowy wybór. Wybierz 'y' dla Tak lub 'n' dla Nie." << endl;
    }
    return 0;
}