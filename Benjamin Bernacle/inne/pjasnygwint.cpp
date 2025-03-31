#include <iostream>
using namespace std;
namespace dawnemiary
{
    const float piatka = 23;
    const float lokiec = 60;
    const float saza = 200;
}
int main()
{
    float wzrost;
    cout << "podaj swoj rozmiar w centymetrach" << endl;
    cin >> wzrost;
    cout << "twój wzrost to:" << wzrost / dawnemiary::piatka << "piatek" << endl;
    cout << "twój wzrost to:" << wzrost / dawnemiary::lokiec << "lokcia" << endl;
    cout << "twój wzrost to:" << wzrost / dawnemiary::saza << "sazy" << endl;
}
