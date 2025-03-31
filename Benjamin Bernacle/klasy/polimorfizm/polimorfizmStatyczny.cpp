#include <iostream>
using namespace std;
class WlasnoscJeden
{
    public:
    int wlasnosc{};
    int powieksz(int wlasnosc);
};
class WlasnoscDwa:public WlasnoscJeden
{
    public:
    int wlasnosc{};
    int powieksz(int wlasnosc);
};
int WlasnoscJeden::powieksz(int wlasnosc)
{
    wlasnosc++;
}
int WlasnoscDwa::powieksz(int wlasnosc)
{
    wlasnosc=wlasnosc+2;
}
int main()
{
    WlasnoscJeden licznik;
    WlasnoscDwa licznik2;

    licznik powieksz()
}