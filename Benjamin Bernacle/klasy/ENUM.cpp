#include <iostream>
using namespace std;
int main() {
// Definicja typu wyliczeniowego o nazwie Ocena:
enum Ocena {
niedostateczny,
dopuszczajacy,
dostateczny,
dobry,
bardzo_dobry,
celujacy 
};
// Deklaracja i inicjalizacja zmiennej ocena należącej do typu Ocena:
Ocena ocena = dostateczny;

cout << "Ocena liczbowa: " << ocena << endl;//2
return 0;
}