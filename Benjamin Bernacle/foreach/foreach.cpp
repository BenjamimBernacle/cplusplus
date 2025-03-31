#include <iostream>
using namespace std;
int main() {
// rozmiar tablicy
// Deklaracja zmiennej tablicowej o nazwie tablica:
int tablica[5];
// Wprowadzenie z klawiatury wartości wszystkich elementów tablicy:
cout << "Podaj wartości poszczególnych elementów tablicy: " << endl;
for (int& element : tablica) {
cout << "element = ";
cin >> element;
}
for (int& element : tablica) {
   cout<<element<<" ";
}
for (int& element : tablica) {
 if(  element%2==0)
 
    cout<<element<<" ";
}
return 0;

}