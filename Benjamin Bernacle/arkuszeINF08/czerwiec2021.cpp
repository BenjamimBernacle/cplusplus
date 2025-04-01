#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    int n = 10;
    
    cout << "Podaj 10 liczb: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    selectionSort(arr, n);
    cout << "Posortowana tablica: ";
    printArray(arr, n);
    
    return 0;
}
