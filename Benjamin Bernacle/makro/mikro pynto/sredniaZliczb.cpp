#include <iostream>
using namespace std;

#define AVG 1

double calculateAverage(int count) {
    int sum = 0;
    float average;
    int number;

    for (int i = 0; i < count; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }

    average = static_cast<float>(sum) / count;
    return average;
}

int main() {
#if AVG
    int count;
    cout << "Enter the number of elements: ";
    cin >> count;

    float avg = calculateAverage(count);
    cout << "Average is: " << avg << endl;
#else
    cout << "Conditional compilation is turned off." << endl;
#endif

    return 0;
}