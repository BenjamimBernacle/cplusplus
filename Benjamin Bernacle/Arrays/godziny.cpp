#include <iostream>
using namespace std;

int main() {
    int sekundy;
    cout << "Podaj sekundy: ";
    cin >> sekundy;

    int dni = sekundy / (3600 * 24);
    int godziny = (sekundy % (3600 * 24)) / 3600;
    int minuty = (sekundy % 3600) / 60;
    int sekundki = (sekundy % 60);

    cout << "W zakresie czasowym jaki podałeś mieści się " << dni << " dni, " << godziny << " godzin, " << minuty << " minut(y) i "<< sekundki <<" sekund(y)." << endl;
    return 0;
}