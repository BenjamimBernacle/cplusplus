
#include <iostream>
using namespace std;

class Pracownik {
public:
string imie;
string nazwisko;
string data_urodzenia;

void wyswietlDane() {
cout << "Imię: " << imie << endl;
cout << "Nazwisko: " << nazwisko << endl;
cout<<"data zatrudnienia: "<<data_urodzenia<<endl;
}
};
int main() {

Pracownik pracownik;

Pracownik *w_pracownik;

w_pracownik = &pracownik;

w_pracownik->imie = "Jan";
w_pracownik->nazwisko = "Kowalski";
w_pracownik->data_urodzenia = "19/10/2020";
w_pracownik->wyswietlDane();
return 0;
}