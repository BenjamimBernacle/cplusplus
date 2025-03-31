#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    std::cout<<"jestes pedofilem?"<<std::endl;
   
    std::srand(std::time(0));

    int wynik = std::rand() % 2;

    if (wynik == 0) {
        std::cout << "Wynik: jestes\n";
    } else {
        std::cout << "Wynik: nie jestes\n";
    }

    return 0;
}
