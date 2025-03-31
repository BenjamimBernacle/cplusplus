#include <iostream>
#include <cmath>
using namespace std;

double PI = M_PI;

double obliczPolePowierzchniKuli(double promien) {
    return 4 * PI * pow(promien, 2);
}
double objetoscKuli(double promien){
    return 1.25*PI*pow(promien, 3);
}

int main() {
    double promien;
    cout << "Podaj promień kuli: \n";
    cin >> promien;

    double polePowierzchni = obliczPolePowierzchniKuli(promien);
    cout << "Pole powierzchni kuli o promieniu " << promien << " wynosi: " << polePowierzchni << endl;

    double objetosc = objetoscKuli(promien);
    cout<<"objetosc kuli o promieniu "<<promien<<" wynosi:"<<objetosc<<endl;

    return 0;
}