#include <iostream>
using namespace std;
// Definicja szablonu — wzorca funkcji polePr():
template <typename T1,typename T2> // deklaracja parametru T szablonu
T2 polePr(T1 pBok1, T1 pBok2) {
return (pBok1 * pBok2);
}

int main() {
float bok1 {1.5}, bok2 {2.51}; // zmienne pomocnicze reprezentujące boki prostokąta
// Wywołania funkcji szablonowych polePr() i obwodPr():
cout << "Pole wynosi " << polePr<int,float>(bok1, bok2) << endl;
cout << endl;
// cout << "Pole wynosi " << polePr(bok1, bok2) << endl; //niejawnie sie tutaj nie da ponieważ z deklaracji bok1 i bok2 nie wynika typ zwracanej wartości.
return 0;
}
