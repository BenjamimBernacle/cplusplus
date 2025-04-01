#include <iostream>
#include <cstdlib>
void generaterandom(int arr[], int size) { 
    for (int i = 0; i < size; i++)
      {
       srand(time(NULL) * (i+1));
        arr[i] = (rand() % 31) + 20;
      }
  }