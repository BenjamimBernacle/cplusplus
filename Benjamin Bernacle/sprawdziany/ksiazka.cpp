#include <iostream>
#include <string>
using namespace std;

class Ksiazka
{
    string tytul;
    string autor;
    int rokWydania;
    static int liczbaKsiazek;
    public:
    // Ksiazka(string, string, int);
    Ksiazka(const Ksiazka &adam){};
    Ksiazka(string tytul, string autor, int rokWydania)
    {
        this->tytul = tytul;
        this->autor = autor;
        this->rokWydania = rokWydania;
        liczbaKsiazek++;
    }
    void setTytul(string tytul)
    {
        this->tytul=tytul;
    }
    void setAutor(string autor)
    {
        this->autor=autor;
    }
    void setRokWydania(int rokWydania)
    {
        this->rokWydania-rokWydania;
    }
    string getTytul()
    {
        return tytul;
    }
    string getAutor()
    {
        return autor;
    }
    int getRokWydania()
    {
        return rokWydania;
    }
    void wypiszInfomacjeOKsiazce()
    {
        liczbaKsiazek++;
        cout <<"\nINFORMACJO O KSIAZCE\n"
             << "------------------------\n"
             << "Tytul ksiazki:  " << tytul
             << "\n----------------------\n"
             << "Autor ksiazki:" << autor
             << "\n----------------------\n"
             << "Rok wydania ksiazki: " << rokWydania
             << "ilosc ksiazek stworzonych: "<< liczbaKsiazek
             << "\n----------------------\n";
    }

};
int Ksiazka::liczbaKsiazek{};

int main()
{
    Ksiazka book1("adam", "adam paliczonka", 1999);
    Ksiazka book2(book1);
    book1.wypiszInfomacjeOKsiazce();
    book2.wypiszInfomacjeOKsiazce();
    return 0;
}