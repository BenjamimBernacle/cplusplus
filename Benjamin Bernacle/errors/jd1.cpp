#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

class ZeroError : public runtime_error {
public:
    ZeroError() : runtime_error("Blad: liczba rowna zero") {}
};

int main() {
    double liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    try {
        if (liczba == 0) {
            throw ZeroError();
        } else if (liczba < 0) {
            throw liczba; // wyjątek typu zmiennej
        } else if (floor(liczba) != liczba) {
            throw runtime_error("Blad: liczba niecalkowita");
        } else if (static_cast<int>(liczba) % 2 != 0) {
            throw exception(); // wyjątek klasy exception
        } else {
            cout << "JD" << endl;
        }
    }
    catch (double d) {
        cout << "Blad typu double: " << d << endl;
    }
    catch (runtime_error e) {
        cout << e.what() << endl;
    }
    catch (exception) {
        cout << "Blad: liczba nieparzysta" << endl;
    }

    return 0;
}
