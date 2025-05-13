#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

class OtherError : public runtime_error {
public:
    OtherError() : runtime_error("Blad: znak nieznany") {}
};

int main() {
    char znak;
    cout << "Podaj znak: ";
    cin >> znak;

    try {
        if (isupper(znak)) {
            cout << "JD" << endl;
        } else if (islower(znak)) {
            throw znak; // wyjątek typu zmiennej
        } else if (isdigit(znak)) {
            throw exception(); // wyjątek klasy exception
        } else if (znak == ',' || znak == '.' || znak == ';') {
            throw runtime_error("Blad: znak interpunkcyjny");
        } else {
            throw OtherError(); // pochodna runtime_error
        }
    }
    catch (char c) {
        cout << "Blad typu char: " << c << endl;
    }
    catch (runtime_error e) {
        cout << e.what() << endl;
    }
    catch (exception) {
        cout << "Blad: znak jest cyfra" << endl;
    }

    return 0;
}
