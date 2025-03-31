#include <iostream>
#include <cmath>

#define PARZYSTA(c)((c%2==0) ? "parzysta":"nieparzysta")
#define POTEGA(b)(pow(b, 3))
using namespace std;
int main()
{
    int liczebka;
    cout<<"podaj liczbe\n";
    cin>>liczebka;
    cout<<"liczba "<<liczebka<<"jest: "<<PARZYSTA(liczebka);
    cout<<"liczba "<<liczebka<<"do potegi 3 to:"<<POTEGA(liczebka);

    return 0;
}