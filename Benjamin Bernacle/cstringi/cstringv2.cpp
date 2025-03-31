#include <iostream>
#include <cstring>

void swapHeadsAndTails(char* str1, char* str2, char* output1, char* output2) {

    char* spacePos1 = strchr(str1, ' ');
    char* spacePos2 = strchr(str2, ' ');

    if (spacePos1 == nullptr || spacePos2 == nullptr) {
       
        strcpy(output1, "");
        strcpy(output2, "");
        return;
    }


    int firstPartLength1 = spacePos1 - str1;
    int secondPartLength1 = strlen(str1) - firstPartLength1 - 1;
    int firstPartLength2 = spacePos2 - str2;
    int secondPartLength2 = strlen(str2) - firstPartLength2 - 1;
    
    char firstHead[100], firstTail[100], secondHead[100], secondTail[100];
    strncpy(firstHead, str1, firstPartLength1);
    firstHead[firstPartLength1] = '\0';
    strcpy(firstTail, spacePos1 + 1);

    strncpy(secondHead, str2, firstPartLength2);
    secondHead[firstPartLength2] = '\0';
    strcpy(secondTail, spacePos2 + 1);


    strcpy(output1, secondTail);
    strcat(output1, " ");
    strcat(output1, firstTail);

    strcpy(output2, secondHead);
    strcat(output2, " ");
    strcat(output2, firstHead);
}

int main() {
    char str1[200], str2[200];
    char output1[200], output2[200];

    std::cout << "Podaj pierwszy dwuczłonowy napis: ";
    std::cin.getline(str1, 200);

    std::cout << "Podaj drugi dwuczłonowy napis: ";
    std::cin.getline(str2, 200);

    swapHeadsAndTails(str1, str2, output1, output2);

  
        std::cout << "Wynik: \n" << output1 << "\n" << output2 << std::endl;

    return 0;
}