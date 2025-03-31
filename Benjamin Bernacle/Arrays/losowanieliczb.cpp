#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double pi(int powtorzenia, int sprzyjajace )
{
    int powtorzenia; int sprzyjajace; double x, y;
    x = (double)rand() / (double)RAND_MAX / 2;
    y = (double)rand() / (double)RAND_MAX / 2;

    if(sqrt(pow(x, 2) + pow(y, 2))<= sprzyjajace)
    {
        sprzyjajace++;
    }
    powtorzenia++;
    return powtorzenia * 4;
}
int main()
{
    double pi;
    cout<<"ile chcesz punktów"<<endl;
    cin>>pi;
    
}