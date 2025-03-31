#include <iostream>
#include <string>
using namespace std;
class osoba
{
    int ID;
    string imie;
void wstaw()
{
cout<<"ID"<<ID<<"\nimie:"<<imie<<endl;
} 
void setLiczba(int wartosc1,string wartosc2)
{
  ID=wartosc1;
  imie=wartosc2;
}
void getLiczba(int &wartosc1,string &wartosc2)
{
  wartosc1=ID;
  wartosc2=imie;
}
};