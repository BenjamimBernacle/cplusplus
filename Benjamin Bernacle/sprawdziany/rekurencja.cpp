#include <iostream>
using namespace std;
long double sequence( long double n)
{
    if(n==1)
    {
        return 3;
    }
    if(n==2)
    {
        return 0.5;
    }
    else
    {
    return (sequence(n-1)*sequence(n-1))/5;
    ;
    }
}

int main()
{
    double n;
    cout<<"\nsekwencja implementacji zadania\n";
    cin>>n;
    cout<<sequence(n);
    
}