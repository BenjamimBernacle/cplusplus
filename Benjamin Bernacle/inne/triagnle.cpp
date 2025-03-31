#include <iostream>
using namespace std;
int main()
{
    // for(int i=0;i<10;i++)
    // {
    //         for(int j=0;j<1+i;j++){
    //           cout<<'0';
    //         }
    //         cout<<endl;
    //
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10 - i; j++)
    //     {
    //         cout << 'O';
    //     }
    //     cout << endl;
    // }
    int wysokosc;

    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;

  
    if (wysokosc % 2 != 0) {
        wysokosc++;
    }

  
    int szerokosc = 2 * wysokosc - 1;

 
    for (int i = 1; i <= wysokosc; i += 2) {
        int liczbaGwiazdek = i;

 
        int iloscSpacji = (szerokosc - liczbaGwiazdek) / 2;


        for (int j = 0; j < iloscSpacji; j++) {
            cout << " ";
        }

        for (int j = 0; j < liczbaGwiazdek; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


