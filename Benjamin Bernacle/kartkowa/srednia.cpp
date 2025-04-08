#include <iostream>
#include <cstdlib>
void generaterandom(int arr[], int size) { 
  for (int i = 0; i < size; i++)
    {
     srand(time(NULL) * (i+1));
      arr[i] = (rand() % 31) + 20;
    }
}
void wypiszTablice(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ", ";
    }
}
int suma(const int arr[], int size)
{
  int suma{};
  for (int i = 0; i < size; i++)
    {
      suma += arr[i];
    }
  return suma;
}
double srednia(const int arr[], int size)
{
    int suma {};
    for (int i = 0; i < size; i++)
    {
        suma += arr[i];
    }
    return suma / (double)size;
}
int main()
{
  
  int arr[10];
  generaterandom(arr, 10);
  wypiszTablice(arr, 10);
  std::cout<<std::endl;
  std::cout<<"Suma: "<<suma(arr, 10)<<std::endl;
  std::cout<<"srednia: "<<srednia(arr,10)<<std::endl;
}