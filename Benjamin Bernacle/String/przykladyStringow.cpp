#include <iostream>
#include <string>
using namespace std;
int main() {
// Deklaracje łańcuchów połączone z ich inicjalizacjami:
string s1 = "C++11";
string s2 = "11";
string s3 = "14";
// Porównanie dwóch łańcuchów:
cout << s3.compare(s2) << endl; // 1
/* UWAGA
* Funkcja compare() pozwala na porównanie dwóch łańcuchów — tutaj: łańcucha s2 z łańcuchem s3.
* Jeżeli funkcja compare() zwraca wartość 0, to oznacza, że łańcuchy są równe. W przeciwnym razie łańcuchy
* są różne.
*
* Jeżeli zwrócona wartość jest dodatnia, to oznacza, że:
* a) albo łańcuch s3 ma tę samą długość co s2, ale jest od niego leksykograficznie „większy”,
* b) albo s3 jest dłuższy od s2.
* Jeżeli zwrócona wartość jest ujemna, to oznacza, że:
* a) albo łańcuch s3 ma tę samą długość co s2, ale jest od niego „mniejszy”,
* b) albo s3 jest krótszy od s2.
*/
// Wyszukanie pozycji zadanego podłańcucha w łańcuchu źródłowym:
cout << s1.find(s2) << endl; // 3
/* UWAGA
* Łańcuchem źródłowym jest tutaj łańcuch s1. Zadanym podłańcuchem, który jest wyszukiwany w łańcuchu
* źródłowym, jest s2.
* Funkcja find() zwraca pozycję pierwszego znaku w pierwszym „dopasowaniu”, czyli wystąpieniu podłańcucha s2
* w łańcuchu s1 — począwszy od pierwszego znaku w s1 (czyli od pozycji 0).
* Jeżeli dopasowania nie znaleziono, funkcja zwraca maksymalną możliwą wartość typu całkowitego bez znaku
* reprezentującego rozmiar łańcucha — npos, która oznacza „aż do końca łańcucha”.
*/
int poczatek = 0; // pozycja początkowa w łańcuchu źródłowym
int dlugosc = 3; // długość podłańcucha
// „Wyciągnięcie” podłańcucha z zadanego łańcucha źródłowego:
string s4 = s1.substr(poczatek, dlugosc);
/* UWAGA
* Funkcja substr() zwraca podłańcuch wynikowy (tutaj: s4) o określonej długości (tutaj: dlugosc) „wyciągnięty”
* — wyodrębniony z zadanego łańcucha źródłowego (tutaj: s1) począwszy od pozycji początkowej
* (tutaj: poczatek).
*/
cout << s4 << endl; // C++
// Określenie długości łańcucha:
cout << s4.length() << endl; // 3
cout<<s1<<endl;
/* UWAGA
* Długość łańcucha znaków określona za pomocą funkcji length() zwraca liczbę znaków w łańcuchu — tutaj:
* w łańcuchu s4.
*/
// Określenie rozmiaru łańcucha:
cout << s4.size() << endl; // 3
/* UWAGA
* Rozmiar łańcucha znaków (tutaj: łańcucha s4) określony za pomocą funkcji size() jest mierzony w bajtach.
*/
cout << s3 << endl; // 14
poczatek = 1; // od drugiego znaku
dlugosc = 1; // jeden znak
// Zastąpienie zadanego podłańcucha w łańcuchu innym podłańcuchem:
cout << s3.replace(poczatek,dlugosc,"5") <<"pyndzellololo"<< endl; // 17
/* UWAGA
* Funkcja replace() pozwala zastąpić podłańcuch o określonej długości (tutaj: dlugosc) w łańcuchu źródłowym
* (tutaj: s3) począwszy od zadanej pozycji początkowej (tutaj: poczatek).
*/
cout << s3 << endl; // 17
// Nadanie wartości łańcuchowi s3:
cout << s3.assign("14") << endl; // 14//s3="14"
/* UWAGA
* Funkcja assign() pozwala nadać nową wartość (tutaj: wartość literału "14") łańcuchowi źródłowemu (tutaj: s3).
* Funkcja zwraca nową wartość łańcucha źródłowego.
*/
cout<<s1.insert(3,"-")<<endl;
s1.replace(3,1,"");
cout<<s1.replace(3,0,"-")<<endl;
return 0;
}
