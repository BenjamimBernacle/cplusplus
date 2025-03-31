#include <iostream>
using namespace std;
unsigned long long silnia(unsigned long long liczba)
{
    if (liczba == 0)
    {
        return 1;
    }
    else
    {
        return silnia(liczba-1)*liczba;
    }  
}
int main()
{
    unsigned long long liczba;
    cout << endl
         << "ile ?" << endl;
    cin >> liczba;
    cout << silnia(liczba);
    return 0;
}