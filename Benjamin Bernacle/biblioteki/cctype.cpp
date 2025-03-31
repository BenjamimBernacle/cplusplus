#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char input[200];
    char modified[200];
    
   cout << "Podaj wieloczłonowy napis: ";
   cin.getline(input, 200);

    int letters = 0;
    int digits = 0;
    int upperCase = 0;
    int controlChars = 0;

    for (int i = 0; i < strlen(input); ++i) {
        if (isalpha(input[i])) {
            letters++;
        }
        if (isdigit(input[i])) {
            digits++;
        }
        if (isupper(input[i])) {
            upperCase++;
        }
        if (iscntrl(input[i])) {
            controlChars++;
        }

        
        if (isupper(input[i])) {
            modified[i] = tolower(input[i]);
        } else if (islower(input[i])) {
            modified[i] = toupper(input[i]);
        } else {
            modified[i] = input[i];
        }
    }

   
    modified[strlen(input)] = '\0';


   cout << "Liczba liter: " << letters <<endl;
   cout << "Liczba cyfr: " << digits <<endl;
   cout << "Liczba dużych liter: " << upperCase <<endl;
   cout << "Liczba znaków sterujących: " << controlChars <<endl;
   cout << "Zmodyfikowany napis: " << modified <<endl;

    return 0;
}
