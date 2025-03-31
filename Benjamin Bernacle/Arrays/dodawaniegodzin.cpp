#include <iostream>
#include <cstdlib>
using namespace std;
int timex, timex1, wynik;
struct czas1
{
    int seconds = 50;
    int minutes = 20;
    int hours = 12;
    int days = 2;
};
struct czas2
{
    int seconds = 50;
    int minutes = 20;
    int hours = 12;
    int days = 2;
};
void zamiennasekundy(czas1, czas2)
{

    czas1 t1;
    czas2 t2;

    timex = t1.seconds + (t1.minutes * 60) + (t1.hours * 3600) + (t1.days * 86400);
    timex1 = t2.seconds + (t2.minutes * 60) + (t2.hours * 3600) + (t2.days * 86400);
    wynik = timex + timex1;
}
void zaminanaczas(czas1, czas2)
{
    wynik;
}
int main()
{      
    
    return 0;
}