#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

class DigitError : public runtime_error {
public:
    DigitError(char ch) : runtime_error("Blad: znak jest cyfra") {}
};

int main() {
    char znak;
    cout << "Podaj znak: ";
    cin >> znak;

    try {
        if (islower(znak)) {
            cout << "jd" << endl;
        } else if (isupper(znak)) {
            throw znak;
        } else if (isdigit(znak)) {
            throw DigitError(znak);
        } else if (znak == ',' || znak == '.' || znak == ';') {
            throw runtime_error("Blad: znak interpunkcyjny");
        } else {
            throw znak;
        }
    } catch (char c) {
        cout << "Blad typu char: ";
        cout << c << endl;
    } catch (runtime_error e) {
        cout << e.what() << endl;
    }

    return 0;
}
