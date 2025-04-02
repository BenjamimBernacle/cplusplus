#include <iostream>
#include <cstdlib>
void generaterandom(int numbers[], int size) { 
    for (int i = 0; i < size; ++i) {
        numbers[i] = std::rand() % 100 + 1;  
    }
  }