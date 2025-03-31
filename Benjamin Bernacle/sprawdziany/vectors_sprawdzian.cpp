#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
vector <int>extreme(vector<int> wektor)
{
    int max=0;
    int min=0;
    for(int &element : wektor)
    {
        if(element>max)
        {
            max=element;
        }
        if(element<min)
        {
            min=element;
        }
    }
    return {max,min};
}
void wypelnianie_vetora(vector<int> wektor, int size)
{ 
    int i{};
    cout<<"podaj wielkosc wektora";
    cin>>size;
    for (int i{}; i<size; i++)
    {
        
      srand(time(NULL) * (i+1));
     wektor.insert(wektor.begin(),(rand() % 20));
    }
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }
}
void usuniecie_i_znalezienie_w_wektorze(vector<int> wektor, int wybierz)
{
    int num1,num2,num3;
    cout << "Podaj trzy liczby oddzielone spacjami: ";
    cin >> num1 >> num2 >> num3;

  
    wektor.push_back(num1);
    wektor.push_back(num3);
    wektor.insert(wektor.begin() + 1, num2);

    
    wektor.erase(wektor.begin() + 1);
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }

}

int main()
{
    int wybierz;
    int size;
    vector<int> wektor;
    wypelnianie_vetora(wektor, size);
    usuniecie_i_znalezienie_w_wektorze(wektor, wybierz);
    cout<<extreme(wektor)[0]<<endl;

}