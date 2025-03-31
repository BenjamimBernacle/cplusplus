#include <iostream>
#include <string>
using namespace std;

class Jajco
{
  string kod;
  int typChowu;
  string krajPochodzenia;
  string reszta;
  static int iloscJaj;

  void setTypChowu(int a)
  {
    typChowu = a;
  }
  void setKrajPochodzenia(string a)
  {
    krajPochodzenia = a;
  }
  void setReszta(int a)
  {
        reszta = a;
  }
public:
  void setKod(string a)
  {
    return;
  }
  string getTypChowuSlownie() const
  {
    if(kod.find('0'))
    {
        cout<<"ekologiczny";
    }
    else if(kod.find('1'))
    {
        cout<<"na wolnym wybiegu";

    }
    else if(kod.find('2'))
    {
        cout<<"sciolkowy";
    }
    else if(kod.find('3'))
    {
        cout<<"klatkowy";
    }
    
  }
  Jajco (string kod)
  {
    
  }
};




int main()
{
 

  
  cout << "Lepszy motor to ten o kolorze: " << lepszyMotor.kolor << endl;

  return 0;
}
