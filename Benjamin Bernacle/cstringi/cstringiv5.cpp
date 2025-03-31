#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string processString(const std::string& input) {
    // Znajdź pozycję spacji dzielącej dwa człony
    size_t spacePos = input.find(' ');
    if (spacePos == std::string::npos) {
        // Jeśli nie ma spacji, zwróć pusty string lub jakikolwiek błąd
        return "";
    }

    // Rozdziel string na dwa człony
    std::string firstPart = input.substr(0, spacePos);
    std::string secondPart = input.substr(spacePos + 1);

    // Zamień miejscami człony
    std::string result = secondPart + " " + firstPart;

    // Dodaj duże litery na początku i na końcu
    result = static_cast<char>(std::toupper(result[0])) + result.substr(1);
    result += static_cast<char>(std::toupper(result[result.length() - 1]));

    // Wstaw '%' przed każdą literą 'a' lub 'A'
    for (size_t i = 0; i < result.length(); ++i) {
        if (result[i] == 'a' || result[i] == 'A') {
            result.insert(i, "%");
            ++i; // Pomiń wstawiony '%'
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Podaj napis dwuczłonowy: ";
    std::getline(std::cin, input);

    std::string output = processString(input);

    if (output.empty()) {
        std::cout << "Błąd: Nieprawidłowy format napisu." << std::endl;
    } else {
        std::cout << "Wynik: " << output << std::endl;
    }

    return 0;
}
