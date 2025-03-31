// C-napisy
// Pobierz napis dwuczłonowy.
// Zamień pierwszy człon z drugim.
// Policz małe litery.
// Sprawdź czy w podanym napisie występuje kombinacja "ab".
// Wyniki zaprezentuj w konsoli.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main() {
  
    char input[100];
    cout << "Podaj napis dwuczłonowy: ";
    cin.getline(input, sizeof(input));

 
    char *space_pos = strchr(input, ' ');
  
    *space_pos = '\0';
    char *first_part = input;
    char *second_part = space_pos+1;

    char swapped[100];
   strcat(swapped, second_part);
   strcat(swapped, " ");
   strcat(swapped, first_part);

   
    int lower_case_count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (islower(input[i])) {
            lower_case_count++;
        }
    }


    char hasAB = (strstr(input, "ab")) || (strstr(second_part, "ab"));
  
    cout << "Napis po zamianie członów: " << swapped << endl;
    cout << "Liczba małych liter: " << lower_case_count << endl;
    cout << "Czy występuje kombinacja ''ab'': " << (hasAB ? "Tak" : "Nie") << endl;

    return 0;
}