
#include <iostream>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;
    void print(string imie2 = "")
    {
        if (imie2 != "")
            cout << "Cześć " << imie2 << ", mam na imie " << imie;
        else
            cout << "Brak danych";
        cout << "\nAktualna liczba instancji to: " << liczbaInstancji;
    }
    Osoba()
    {
        liczbaInstancji++;
        id = 0;
        imie = "";
    }
    Osoba(int idWstaw, string imieWstaw) : Osoba()
    {
        id = idWstaw;
        imie = imieWstaw;
    }
    Osoba(const Osoba& os) :Osoba()
    {
        id = (os.id) + 1;
        imie = os.imie;
    }
};

int Osoba::liczbaInstancji = 0;

int main()
{
    Osoba person(12, "<imie>");
    person.print("<imie2>");
    Osoba person2 = person;
    cout << '\n';
    person2.print();
}