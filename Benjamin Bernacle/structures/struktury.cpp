#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

  struct timex
    {
        int seconds;
        int czas;
    };
    
int main()
{
    timex time1;
    cout<<"podaj liczbę sekund"<<endl;
    cin>>time1.seconds;
    cout<<"dni: "<<time1.seconds/86400<<endl;
    time1.czas=time1.seconds%86400;
    cout<<"godziny: "<<time1.czas/3600<<endl;
   time1.czas=time1.czas%3600;
    cout<<"minuty: "<<time1.czas/60<<endl;
    time1.czas=time1.czas%60;
    cout<<"sekundy: "<<time1.czas;
    return 0;
}