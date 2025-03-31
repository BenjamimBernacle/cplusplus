#include <iostream>
using namespace std;
#define SREDNIA(values, n) ({ \
    double sum = 0.0; \
    for (int i = 0; i < n; ++i) \
        sum += values[i]; \
    sum / n; \
})

int main() {
    int n;
    cout << "Podaj ilość liczb: ";
    cin >> n;

    double* liczby = new double[n];
    cout << "Podaj liczby: ";
    for (int i = 0; i < n; ++i) cin >> liczby[i];

    cout << "Średnia arytmetyczna wynosi: " << SREDNIA(liczby, n) << endl;

    delete[] liczby;
    return 0;
}