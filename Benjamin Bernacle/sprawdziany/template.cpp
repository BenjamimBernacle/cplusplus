
#include <iostream>
#include <cmath>
using namespace std;
template <typename T1, typename T2>
T2 funkcja(T1 zmienna1, T2 zmienna2)
{
    cout<<endl;
    cout<<"konkretyzacja\n"<<"srednia:"<<endl;
    return (zmienna1+zmienna2)/2;
}
template <> 
int funkcja(float zmienna, int zmienna1)
{
    cout<<endl<<endl;
   cout<<"specjalizacja\n"<<"za oknem piździ"<<endl;
   return 0;
  
}

template <> 
double funkcja(double zmienna, double zmienna1)
{
    cout<<endl<<endl;
    cout<<"specjalizacja\n";
   return zmienna*zmienna1;
}
int main()
{
    cout << endl;
   cout<< funkcja<int,float>(4, 5.5); 
    cout<<funkcja<float, int>(5.3 , 4);
    cout<<funkcja(2.65 , 2.3);
    return 0;
}
// Napisz szablon funkcji pobierającej dwa argumenty,
//  która bedzie się dwa razy specjalizować
//  i raz konkretyzować dla zmiennych typu:
        // int,float -zwraca srednią argumentów (Z przecinkiem).
        // float,int-komunikat o pogodzie 
        // double,double-iloczyn argumentów
// Spróbuj tak skonstruować szablon by były możliwe 
// wywołania niejawne. Wywołaj jawnie 
// i niejawnie w sumie trzy razy  funkcję.