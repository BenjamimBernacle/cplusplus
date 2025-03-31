#include <iostream>
#include <stdexcept>


using namespace std;


class NegativeNumberError : public runtime_error {
public:
    explicit NegativeNumberError(const string& msg) : runtime_error(msg) {}
};


class NonIntegerError : public runtime_error {
public:
    explicit NonIntegerError(const string& msg) : runtime_error(msg) {}
};

int main() {
    double liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    try {
       
        if (liczba < 0) {
            throw NegativeNumberError("Błąd: Liczba jest ujemna.");
        }
        
       else if (liczba-(int)liczba !=0) {
            throw NonIntegerError("Błąd: Liczba nie jest całkowita.");
        }
        cout << "Podana liczba to: " << static_cast<int>(liczba) << endl;
    }
    catch (const NegativeNumberError& e) {
        cout << e.what() << endl;
    }
    catch (const NonIntegerError& e) {
        cout << e.what() << endl;
    }

    return 0;
}
