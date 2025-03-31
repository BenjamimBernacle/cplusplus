#include <fstream>
#include <iostream>
using namespace std;
int *fileToArray(int n)
{
    fstream plik;

    int *arr = new int[n];
    plik.open("plikKartkowka.txt", ios::in);
    int i{};
    int fromFile{};
    while (i <= n)
    {
        plik >> fromFile;
        arr[i] = fromFile;
        i++;
    }
    plik.close();
    return arr;
}
void wypisz(int arr[], int n)
{
    for (short i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void dopisywanieDoPliku(int n, int arr[])
{
  cout<<"ile chcesz liczb"<<endl;
  cin>>n;
    fstream plik;
    int liczba;
    plik.open("plikKartkowka.txt", ios::app);
    for (int i = 1; i < n; i++)
    {
        int licznik{};
        cout << "Podaj ocenę " << licznik + 1 << ": ";
        cout<<" ";
        cin>>liczba;
        plik<< liczba;
    }
    plik.close();
}
double sumaFromArray(int arr[], int n)
{
    int sum{};
    for (int i = 0; i < n; i++)
    {
        sum += *(arr) + i;
    }
    return sum;
}
int main()
{
    int n;
    int *arr = fileToArray(n);
    dopisywanieDoPliku(n, arr);
    wypisz(arr, n);
    cout << "suma: " << sumaFromArray(arr, n);
    return 0;
}