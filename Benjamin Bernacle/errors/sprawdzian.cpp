// Pobierz  literę od użytkownika: jeżeli jest małą to jest dobrze i się wypisuje komunikat "jd".
//  Jeżeli litera jest duża błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej.
//  Jeżeli jest cyfrą blad obsługuje klasa pochodna od runtime_error., jeżeli jest znakiem interpunkcyjnym(, . ;  )
//   błąd wyrzucany jest przy pomocy klasy  runtime_error. Jeżeli litera nie jest literą ani cyfrą ani znakiem interpunkcyjnym
//    błąd z odpowiednim komunikatem jest wyrzucany przez typ zmiennej
#include <iostream>
#include <stdexcept>
#include <cctype>

using namespace std;

class Error : public runtime_error
{
public:
    Error(char ch) : runtime_error("digit jest cyfra") {}
};

int main()
{
    char digit;
    cout << "Podaj digit: ";
    cin >> digit;

    try
    {
        if (islower(digit))
        {
            cout << "jd" << endl;
        }
        else if (isupper(digit))
        {
            throw digit;
        }
        else if (isdigit(digit))
        {
            throw Error(digit);
        }
        else if (digit == ',' || digit == '.' || digit == ';')
        {
            throw runtime_error("znak interpunkcyjny");
        }
        else
        {
            throw digit;
        }
    }
    catch (char pyntko)
    {
        cout << "Blad typu char: ";
        cout << pyntko << endl;
    }
    catch (runtime_error error)
    {
        cout << error.what() << endl;
    }

    return 0;
}