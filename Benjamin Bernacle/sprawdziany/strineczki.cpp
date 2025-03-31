#include <iostream>
#include <string>
using namespace std;
string dodajPrzecinki(string tekst)
{
    for (size_t i = 0; i < tekst.length(); ++i)
    {
        if (tekst[i] == ' ')
        {
            tekst.insert(i, ",");
            ++i;
        }
    }
    return tekst;
}
string dodajCudzyslowia(string tekst)
{
    tekst.insert(0, "''");
    tekst.append("''");//dawanie cudzyslowi do tego nie dziala. to dalem te tekie
    return tekst;
}
int main()
{   
    string tekst;
    cout<<"podaj tekst ziut:\n";
    getline(cin,tekst);
     tekst=dodajPrzecinki(tekst);
     tekst=dodajCudzyslowia(tekst);
   cout<<"Tekst po dodaniu tych:"<<tekst<<"\n";
    return 0;
}
