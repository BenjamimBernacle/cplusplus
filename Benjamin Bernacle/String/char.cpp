#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char wersja1[30];
    cout << "Podaj marke samochodu:" << endl;
    cin.get(wersja1, 30);
    cout << wersja1 << endl;
    cin.ignore(50, '\n');
    cout << "Podaj model samochodu:  ";
    char wersja2[30];
    cin.get(wersja2, 30);
    cout << wersja2 << endl;
    cin.ignore(50, '\n');
    char wersja3[30];
    cout << "Podaj rok produkcji samochodu:" << endl;
    cin.get(wersja3, 30);
    cout << wersja3 << endl;
    cin.ignore(50, '\n');

    char napis1[30]{"programowanie"};
    char napis2[30]{"zorientowane"};
    char napis3[30]{"obiektowo"};
    strcat(napis1, " ");
    strcat(napis1, napis2);
    strcat(napis1, " ");
    strcat(napis1, napis3);
    cout << "łańcuch: " << napis1 << endl;

    char znak1[30]{"Java"};
    char znak2[30]{"JavaScript"};
    cout << "Czy napisy są identyczne?: " << endl;
    if (strcmp(znak1, znak2) == 0)
    {
        cout << "oj tak" << endl;
    }
    else
    {
        cout << "oj nie" << endl;
    }
    char sprawdz1[30]{"Runtime"};
    char sprawdz2[30]{"Java Runtime Environment:"};
    if (strstr(sprawdz2, sprawdz1) == nullptr)
    {
        cout << "oj nie" << endl;
    }
    else
    {
        cout << "Napis \"Runtime\""
             << " stanowi podłańcuch łańcucha " << sprawdz2
             << " od pozycji " << strstr(sprawdz2, sprawdz1) << endl;
    }

    char dwa[30];
    cout << "podaj nazwę miejscowości: " << endl;
    cin.get(dwa, 30);
    cout << dwa << endl;
    cin.ignore(50, '\n');

    char zastap1[30]{"C++, JavaScript, C#"};
    char zastap2[30] = {"C++ "};
    char zastap3[30] = {" C#"};
    strstr(zastap1, "Java");

    strcat(zastap2,"Java");
    cout<<strcat(zastap2,"C#")<<endl;
    cout << "JavaScript zastąpione: " << zastap2 << endl;

    return 0;
}