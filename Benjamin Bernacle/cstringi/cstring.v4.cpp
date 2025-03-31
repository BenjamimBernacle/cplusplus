#include <iostream>
#include <cstring>

void insertMiddle(char* fullName, char* middleName, char* output) {

    char* spacePos = strchr(fullName, ' ');

    int firstNameLength = spacePos - fullName;
    int lastNameLength = strlen(fullName) - firstNameLength - 1;

    char firstName[100], lastName[100];
    strncpy(firstName, fullName, firstNameLength);
    firstName[firstNameLength] = '\0';
    strcpy(lastName, spacePos + 1);

    
    strcpy(output, firstName);
    strcat(output, " ");
    strcat(output, middleName);
    strcat(output, " ");
    strcat(output, lastName);
}

int main() {
    char fullName[200];
    char middleName[100];
    char output[300];

    std::cout << "Podaj imię i nazwisko: ";
    std::cin.getline(fullName, 200);

    std::cout << "Podaj drugie imię: ";
    std::cin.getline(middleName, 100);

    insertMiddle(fullName, middleName, output);

 
        std::cout << "Wynik: " << output << std::endl;
    

    return 0;
}


