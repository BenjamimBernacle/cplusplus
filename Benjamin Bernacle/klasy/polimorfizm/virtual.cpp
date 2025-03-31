#include <iostream>
using namespace std;
// Definicja abstrakcyjnej klasy bazowej Osoba:
class Osoba {
public:
// Deklaracje zmiennych członkowskich:
string imie;
string nazwisko;
/* UWAGA
* Klasa abstrakcyjna może zawierać deklaracje zwykłych — instancyjnych zmiennych i metod członkowskich.
*/
// Deklaracja (prototyp) metody abstrakcyjnej — funkcji czysto wirtualnej:
virtual void wyswietlDane() =0;
};
// Definicja klasy pochodnej Pracownik:
class Pracownik : public Osoba {
public:
Pracownik(){};
Pracownik(string imie_p,string nazwisko_p,string stanowisko_p)
{
    imie=imie_p;
    nazwisko=nazwisko_p;
    stanowisko=stanowisko_p;
}
string stanowisko;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << stanowisko << endl;
}

/* UWAGA
* Metoda abstrakcyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana
* w jej klasie pochodnej.
*/
};
// Definicja klasy pochodnej Uczen:
class Uczen : public Osoba {
public:
string klasa;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << klasa << endl;
}
};
int main() {
Osoba *pointer=new Pracownik("bob","bobowski","bobowanie");
pointer->wyswietlDane();

return 0;
}