#include <iostream>
#include <iomanip>
using namespace std;
class Dystrybutor
{
    int iloscWody;
    int totalNalanaWoda={};
    int pojemnosc;
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
    void nalejDoKubka(int ile, int &kubek)
    {
        if (ile >= iloscWody)
        {
            cout << "W dystrybutorze nie ma tyle wody"<<endl;
            totalNalanaWoda += iloscWody;
        }
        else
        {
        totalNalanaWoda += ile;
        }
        iloscWody -= ile;
        kubek += ile;
    }
    void uzupelnijWode()
    {
        iloscWody = pojemnosc;
        cout << "Uzupełniono wode"<<endl;
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
    void wypiszInformacjeoDystrybutorze()
    {
        cout << "Ilość wody: "<< iloscWody <<endl << "Ilość wody nalanej do kubka all time: " << totalNalanaWoda <<endl << "Pojemność dystrybutora: " <<pojemnosc <<endl <<"Kolor dystrybutora: " <<kolorDystrybutora <<endl << "Czy ma ciepłą wodę: " <<czyMaCieplaWode <<endl<< "Ilość dystrybutorów: "<< liczbaDystrybutorow;
    }
};
int Dystrybutor::liczbaDystrybutorow=0;
int main()
{
    int a;
    cout << boolalpha;
    Dystrybutor woda(1000, 5000, "czarny", true);
    int kubek = 0;
    woda.nalejDoKubka(1000, kubek);
    woda.uzupelnijWode();
    woda.wypiszInformacjeoDystrybutorze();
    return 0;
}