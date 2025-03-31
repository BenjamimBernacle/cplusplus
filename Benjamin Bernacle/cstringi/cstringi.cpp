#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    // Pobranie napisu dwuczłonowego
    char input[100];
    std::cout << "Podaj napis dwuczłonowy: ";
    std::cin.getline(input, sizeof(input));

    // Znalezienie pozycji spacji dzielącej dwa człony
    char *space_pos = std::strchr(input, ' ');
    if (space_pos == nullptr) {
        std::cerr << "Podano niepoprawny napis dwuczłonowy." << std::endl;
        return 1;
    }

    // Podział napisu na dwa człony
    *space_pos = '\0';
    char *first_part = input;
    char *second_part = space_pos + 1;

    // Zamiana miejscami pierwszego i drugiego członu
    char swapped[100];
    std::snprintf(swapped, sizeof(swapped), "%s %s", second_part, first_part);

    // Liczenie małych liter
    int lower_case_count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (std::islower(input[i])) {
            ++lower_case_count;
        }
    }
    for (int i = 0; second_part[i] != '\0'; i++) {
        if (std::islower(second_part[i])) {
            ++lower_case_count;
        }
    }

    // Sprawdzenie, czy występuje kombinacja "ab"
    bool has_ab = (std::strstr(input, "ab") != nullptr) || (std::strstr(second_part, "ab") != nullptr);

    // Wyświetlenie wyników w konsoli
    std::cout << "Napis po zamianie członów: " << swapped << std::endl;
    std::cout << "Liczba małych liter: " << lower_case_count << std::endl;
    std::cout << "Czy występuje kombinacja 'ab': " << (has_ab ? "Tak" : "Nie") << std::endl;

    return 0;
}