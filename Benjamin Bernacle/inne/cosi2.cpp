#include <iostream>
using namespace std;
int main()
{
    char znak;
    char znak1;
    cout << "podaj dwie cyfry";
    cin >> znak;
    cin >> znak1;
    int liczba, liczba1;
    float liczba3;
    liczba = (int)znak - 48;
    liczba1 = (int)znak1 - 48;
    liczba3 = (float)liczba / liczba1;
    cout << liczba3 << endl;
    return 0;
}
