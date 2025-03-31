#include <iostream>
#include <cstring>

// Funkcja dodająca przecinki przed spacjami
std::string dodajPrzecinki(std::string tekst) {
    for (size_t i = 0; i < tekst.length(); ++i) {
        if (tekst[i] == ' ') {
            tekst.insert(i, ",");
            ++i; // Zwiększamy i, aby nie zapętlić się na tym samym miejscu
        }
    }
    return tekst;
}

// Funkcja dodająca cudzysłowy na początek i koniec
std::string dodajCudzyslowia(std::string tekst) {
    tekst.insert(0, "``");
    tekst.append("``");
    return tekst;
}

int main() {
    std::string tekst;
    std::cout << "Podaj tekst: ";
    std::getline(std::cin, tekst);

    tekst = dodajPrzecinki(tekst);
    tekst = dodajCudzyslowia(tekst);

    std::cout << "Tekst po modyfikacji: " << tekst << std::endl;

    return 0;
}