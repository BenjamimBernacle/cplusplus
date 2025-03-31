#include <iostream>
using namespace std;

template <typename T1, typename T2>
class SzablonKlasy
{
public:
    T1 p1;
    T2 p2;
    void display()
    {
        cout << "konkretyzacja " << endl;
    };
};

template <>
void SzablonKlasy<double, float>::display()
{
    cout << "spec double float\n ";
};
template <>
void SzablonKlasy<int, float>::display()
{
    cout << "spec int float\n ";
};
int main()
{
    SzablonKlasy<int, float> pyntko1;
    pyntko1.display();
    SzablonKlasy<double, float> pyntko2;
    pyntko2.display();
    SzablonKlasy<int, int> pyntko3;
    pyntko3.display();
    return 0;
};
