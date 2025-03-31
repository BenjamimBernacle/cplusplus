#include <iostream>
using namespace std;
namespace inlitery
{
    const int litr = 1;
    const int galon = 5;
    const int wanna = 200;
    const int basen = 500;
    const int cysterna = 10000;

}
struct litry
{
    int litr{};
    int galon{};
    int wanna{};
    int basen{};
    int cysterna{};
};
void litrywpojemnikach(int litr, litry &liter)
{

    liter.cysterna = litr / inlitery::cysterna;
    litr = litr % inlitery::cysterna;

    liter.basen = litr / inlitery::basen;
    litr = litr % inlitery::basen;

    liter.wanna = litr / inlitery::wanna;
    litr = litr % inlitery::wanna;

    liter.galon = litr / inlitery::galon;
    litr = litr % inlitery::galon;
    liter.litr = litr;
}
int main()
{
    int litr{};
    litry liter;
    cout << "daj litr a jo to zamieniajta \n";
    cin >> litr;
    litrywpojemnikach(litr, liter);
    cout << "cysterna: " << liter.cysterna << endl;
    cout << "basen: " << liter.basen << endl;
    cout << "wanna: " << liter.wanna << endl;
    cout << "galon: " << liter.galon << endl;
    cout << "litr: " << liter.litr << endl;
    return 0;
}