// #include <iostream>
// using namespace std;

// class Osoba{
//     private:
//         int pesel;
//     public:
//         string imie, nazwisko;
//     void print(){
//         cout << "name:\n" << imie << "\nnazwisko:\n" << nazwisko << "\npesel:\n" << pesel << '\n';
//     }
//     Osoba(){
//         cout << "enter name:\n";
//         cin >> imie;
//         cout << "\nenter lastname:\n";
//         cin >> nazwisko;
//         cout << "\nenter pesel:\n";
//         cin >> pesel;
//         cout << '\n';
//     }
// };
// int main(){
//     Osoba person;
//     person.print();
// }

#include <iostream>
#include <string>
using namespace std;
class osoba
{
    int pesel = 1;

public:
    string imie = "A";
    string nazwisko = "B";
    void wpisz()
    {
        cout << "podaj imie: ";
        cin >> imie;
        cout << "podaj nazwisko: ";
        cin >> nazwisko;
        cout << "podaj pesel: ";
        cin >> pesel;
    }
    void wypisz()
    {
        cout << imie << " " << nazwisko << " " << pesel;
    }
};
int main()
{
    osoba Test;
    Test.wpisz();
    Test.wypisz();

    return 0;
}


