#include <iostream>
#include <string>
using namespace std;

string zamien(string napis)
{
    int pierwsza_spacja = napis.find(' ');
    int ostatnia_spacja = napis.rfind(' ');
    return napis.substr(ostatnia_spacja + 1) + " " +
           napis.substr(pierwsza_spacja + 1, ostatnia_spacja - pierwsza_spacja - 1) + " " +
           napis.substr(0, pierwsza_spacja);
}

int main()
{
    string napis;
    cout << "Podaj trzyczłonowy napis: ";
    getline(cin, napis);
    string wynik = zamien(napis);
    cout << "Po zamianie: " << wynik << endl;
    return 0;
}
