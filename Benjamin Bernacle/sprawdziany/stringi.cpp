#include <iostream>
#include <string>

// Funkcja szyfrująca tekst za pomocą szyfru Cezara
std::string szyfrujCezarem(std::string tekst, int przesuniecie) {
    std::string zaszyfrowanyTekst = "";
    for (char znak : tekst) {
        if (isalpha(znak)) { // Sprawdź, czy znak jest literą
            char poczatkowyCase = islower(znak) ? 'a' : 'A'; // Początkowa litera w alfabecie
            char zaszyfrowanyZnak = poczatkowyCase + (znak - poczatkowyCase + przesuniecie) % 26;
            zaszyfrowanyTekst += zaszyfrowanyZnak;
        } else {
            zaszyfrowanyTekst += znak; // Pozostaw znaki inne niż litery bez zmiany
        }
    }
    return zaszyfrowanyTekst;
}

// Funkcja odszyfrowująca tekst z szyfru Cezara
std::string odszyfrujCezarem(std::string zaszyfrowanyTekst, int przesuniecie) {
    return szyfrujCezarem(zaszyfrowanyTekst, 26 - przesuniecie); // Dla odszyfrowania przesuwamy się w przeciwnym kierunku
}

int main() {
    std::string tekst;
    int przesuniecie;

    std::cout << "Podaj tekst do zaszyfrowania: ";
    std::getline(std::cin, tekst);
    std::cout << "Podaj przesuniecie: ";
    std::cin >> przesuniecie;

    std::string zaszyfrowanyTekst = szyfrujCezarem(tekst, przesuniecie);
    std::cout << "Zaszyfrowany tekst: " << zaszyfrowanyTekst << std::endl;

    std::string odszyfrowanyTekst = odszyfrujCezarem(zaszyfrowanyTekst, przesuniecie);
    std::cout << "Odszyfrowany tekst: " << odszyfrowanyTekst << std::endl;

    return 0;
}
