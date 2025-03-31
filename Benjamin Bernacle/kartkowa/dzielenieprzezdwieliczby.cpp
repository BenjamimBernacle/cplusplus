#include <cstdlib>
#include <iostream>
using namespace std;
void losowanie(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    srand(time(NULL) * (i + 1));
    arr[i] = rand() % 28 + 5;
  }
}
void wypisz(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << ", ";
  }
}
int liczbaPodzielnychPrzezTrzyiDwa(int arr[], int size)
{
    int liczbaPodzielnych{};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0)
        {
            if(arr[i] % 2 == 0){
            liczbaPodzielnych++;}
        }
    }
    return liczbaPodzielnych;
}
double srednia(int tablica[], int rozmiarTablicy) {
  int suma = 0;
  for (int i = 0; i < rozmiarTablicy; i++) {
    suma += tablica[i];
  }
  double srednia = suma / (double)rozmiarTablicy;
  return srednia;
}
int main() {
  const int size = 5;
  int arr[size];
  losowanie(arr, size);
  wypisz(arr, size);
  cout << "\nPodzielne przez 3 i 2: "
       << liczbaPodzielnychPrzezTrzyiDwa(arr, size);
  cout << "\nŚrednia " << srednia(arr, size);
}