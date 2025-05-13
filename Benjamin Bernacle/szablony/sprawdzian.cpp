// Stworz szablon klasy cylinder który zawiera pola height i radius  i metodę objętość. 
// Zastosuj  3 parametry uogólnione. Wykonaj specjalizację dla int,int,double konkretyzację dla int double,double. 
// Tak stwórz definicje aby secjalizację i konkretyzację wykonać jawnie i niejawnie.
#include <iostream>
using namespace std;


template<typename T1, typename T2, typename T3>
class Cylinder {
    T1 height;
    T2 radius;
    T3 pi;
public:
    Cylinder(T1 h, T2 r, T3 p) : height(h), radius(r), pi(p) {}

    auto objetosc() {
        return pi * radius * radius * height;
    }
};


template<>
class Cylinder<int, int, double> {
    int height;
    int radius;
    double pi;
public:
    Cylinder(int h, int r, double p) : height(h), radius(r), pi(p) {}

    auto objetosc() {
        return pi * radius * radius * height;
    }
};

int main() {

    Cylinder c1(10, 3.0, 3.14); 
    cout << "Objetosc (int, double, double): " << c1.objetosc() << endl;


    Cylinder<int, double, double> c2(15, 2.5, 3.14);
    cout << "Objetosc (int, double, double): " << c2.objetosc() << endl;


    Cylinder c3(5, 2, 3.14);
    cout << "Objetosc (int, int, double): " << c3.objetosc() << endl;

    return 0;
}
