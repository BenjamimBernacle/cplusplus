#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    string napis1,napis2;
    cout<<"podaj napis dwuczlonowy";
    getline(cin,napis1);
    cout<<"podaj napis dwuczlonowy";
    getline(cin,napis2);
    string ogon2=napis2.substr(napis2.find(" ")+1,napis2.length()-napis2.find(" "));
    string glowa1=napis1.substr(0,napis1.find(" "));
    napis1.replace(0,napis1.find(" "),ogon2);
    napis2.replace(napis1.find(" ")+1,napis1.length()-napis1.find(" ")+1,glowa1);   
    cout << napis1<< endl;
    cout << napis2<< endl;
    return 0;
}