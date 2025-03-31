#include <iostream>
#include <string>
#include "operacje.h"
using namespace std;
int main()
{   
    double bok;
    cout<<"podaj bok kwadratu"<<endl;
    cin>>bok;
    
    cout<<"pole kwadratu wynosi:"<<poleKw(bok)<<endl;
     cout<<"obwód kwadratu wynosi:"<<obwodKw(bok)<<endl;
}