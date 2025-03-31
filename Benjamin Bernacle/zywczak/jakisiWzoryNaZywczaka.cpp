#include <iostream>
using namespace std;
double sequence1(double liczba)
{
    if(liczba==1)
    {
        return 5;
    }
    else{
        return (sequence1(liczba-1)/4)+1;
    }
}
int main()
{
     double liczba;
    cout << endl << "ile?" << endl;
    cin >> liczba;
    cout << sequence1(liczba);  
}
