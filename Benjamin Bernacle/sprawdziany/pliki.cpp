#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void randomNumbersToFile(int n)
{
    fstream plik;
    plik.open("pliki.txt", ios::out);
    srand(time(NULL));
    plik << rand() % 10;
    for (int i = 1; i < n; i++)
    {
        srand(time(NULL) * (i + 1));
        plik << " " << rand() % 10;
    }
    plik.close();
}
int fileSize(){
    fstream plik;
    plik.open("pliki.txt", ios::in);
    int i{};
    int zPliku{};
    while (!plik.eof())
    {
        plik >> zPliku;
        i++;
    }
    plik.close();
    return i;
}
int *fileToArray(int n)
{
    fstream plik;
    
    int *arr = new int[n];
    plik.open("pliki.txt", ios::in);
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
double SumaFromArray(const int arr[], int size){
    int sum{};
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void sumadopliku(int suma)
{
    fstream plik;
    plik.open("pliki.txt", ios::app);
    plik<<"\nSuma: "<<suma;
    plik.close();
}
int main()
{
    int sum;
    fstream plik;
    randomNumbersToFile(10);
    int size = fileSize();
    int *arr = fileToArray(size);
    cout << "suma: "<<SumaFromArray(arr, 10)<<endl;
    sumadopliku(SumaFromArray(arr,10));
    return 0;
}
//pobierz od użytkownika 10 liczb i zapisz je do pliku. Następnie odczytaj je z pliku i wyświetl ich sumę którą dopisz do pliku.