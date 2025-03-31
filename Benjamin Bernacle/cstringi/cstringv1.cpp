#include <iostream>
#include <cstring>
#include <cctype>

void processString(char* input, char* output) {
  
    char* spacePos = strchr(input, ' ');
  

    
    int firstPartLength = spacePos - input;
    int secondPartLength = strlen(input) - firstPartLength - 1;
    
    char firstPart[100], secondPart[100];
    strncpy(firstPart, input, firstPartLength);
    firstPart[firstPartLength] = '\0';
    strcpy(secondPart, spacePos + 1);

   
    strcpy(output, secondPart);
    strcat(output, " ");
    strcat(output, firstPart);

 
    output[0] = toupper(output[0]);
    int len = strlen(output);
    output[len] = toupper(output[len - 1]);
    output[len + 1] = '\0';

    char temp[200];
    int j = 0;
    for (int i = 0; i < strlen(output); ++i) {
        if (isalpha(output[i])) {
            temp[j++] = '%';
        }
        temp[j++] = output[i];
    }
    temp[j] = '\0';

    strcpy(output, temp);
}

int main() {
    char input[200];
    char output[200];

    std::cout << "Podaj napis dwuczłonowy: ";
    std::cin.getline(input, 200);

    processString(input, output);
        std::cout << "Wynik: " << output << std::endl;
    return 0;
}