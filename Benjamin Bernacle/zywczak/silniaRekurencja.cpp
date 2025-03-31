#include <iostream>
using namespace std;
unsigned long long iteracja(unsigned long long liczba)
{   unsigned long long wynik = 1;
    for (short i = 1; i <= liczba; i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}
int rekurencja(int liczba)
{
    if (liczba==0)
    {
        return 1;
    }
    else
     return rekurencja(liczba-1)*liczba;
}
int porownanie(int liczba)
{
    if(liczba==0)
    {
        return 1;
    }
    if(liczba==2)
    {
        return 6;
    }
     if(liczba==3)
    {
        return 8;
    }
    else{
        return (porownanie(liczba-1)+porownanie(liczba-2))/2;
    }
}
int main()
{
    unsigned long long liczba;
    cout << endl
         << "ile ?" << endl;
    cin >> liczba;
    cout << "iteracja"<<iteracja(liczba)<<endl;
    cout<< "rekurencja"<<rekurencja(liczba)<<endl;
    cout<<"porownanie"<<porownanie(liczba)<<endl;
    return 0;
}