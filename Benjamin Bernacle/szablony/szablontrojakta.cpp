#include <iostream>
using namespace std;

template <typename T1,typename T2> 
T2 obwodTr(T1 pBok1, T1 pBok2, T1 pBok3) {
return (pBok1+pBok2+pBok3);
}

int main() {
float bok1 {1.55}, bok2 {2.541}, bok3{2.843};
cout << "obwod wynosi(1) " << obwodTr<float, float>(bok1, bok2, bok3) << endl;
cout << endl;
cout << "obwod wynosi(2) " << obwodTr<float, int>(bok1, bok2, bok3) << endl;
cout << endl;
return 0;
}