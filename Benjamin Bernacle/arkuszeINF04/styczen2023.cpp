#include <iostream>
using namespace std;
int Eukiledesa(int a, int b)
{
    while (a != b)
    {
        if (a != b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else if (a < b)
            {
                b = b - a;
            }
        }
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"wpisz liczbe a:\n";
    cin>>a;
    cout<<"wpisz liczbe b:\n";
    cin>>b;
    cout<<"nwd:"<<Eukiledesa(a,b);
}