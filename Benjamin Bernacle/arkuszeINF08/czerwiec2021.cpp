#include <iostream>
using namespace std;

class Sort {
public:
  
    int findMinIndex(int arr[], int start, int n) {
        int minIndex = start;
        for (int j = start + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        return minIndex;
    }

    
    void selectionSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
           
            int minIndex = findMinIndex(arr, i, n);
           
            swap(arr[i], arr[minIndex]);
        }
    }

    
    void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[10];
    int n = 10;
    Sort sortowanie;

    cout << "Podaj 10 liczb calkowitych: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortowanie.selectionSort(arr, n);
    cout << "Posortowana tablica: ";
    sortowanie.printArray(arr, n);

    return 0;
}
