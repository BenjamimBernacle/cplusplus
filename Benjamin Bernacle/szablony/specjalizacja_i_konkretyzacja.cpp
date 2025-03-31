#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T1 funkcja(T1 zmienna1, T2 zmienna2)
{
       cout<<endl<<endl;
    return pow(zmienna1, zmienna2);
}
template <> // definicja szablonu specjalizowanego
float funkcja(
    float zmienna, double zmienna1)
{
    cout<<endl<<endl;
    return zmienna+zmienna1;
}
template <>
double funkcja(double zmienna, double zmienna7)
{
   cout<<endl<<endl;
    return zmienna*zmienna7;
}
int main()
{
    cout << endl;
   cout<< funkcja<int,int>(4,5); // specjalizowanie szablonu funkcji niejawne double,float
    cout<<funkcja(5.3f,4.3);// specjalizowanie szablonu funkcji  niejawne float,double
    cout<<funkcja(2.65,2.3);//konkretyzacja niejawna int,double
    return 0;
}