#include <iostream>
#include <string>
using namespace std;
// struct zad1
// {
//     string s1 = "programowanie";
//     string s2 = "zorientowanie";
//     string s3 = "obiektowo";
// };
// struct zad2
// {
//     string s1 = "1";
//     string s2 = "2";
// };
// struct zad3
// {
//     string s1;
//     string s2;
// };
int main()
{
//     zad1 z1;
//     zad2 z2;
//     zad3 z3;
//     cout << "zadanie 1\n";
//     z1.s1.append(" " + z1.s3);
//     cout << z1.s1.append(" " + z1.s2) << endl;
//     cout << "---------------------\n";
//     cout << "zadanie 2\n"
//          << endl;
//     cout << z2.s2.compare(z2.s1) << endl;
//     cout << "--------------------\n";
//     cout << "zadanie 3\n"
//          << endl;
//     cout << "podaj pierwszy lanuch\n";
//     getline(cin, z3.s1);
//     cout << "podaj drugi lancuch\n";
//     getline(cin, z3.s2);
//     if (z3.s1.find(z3.s2))
//     {
//         cout << "tak\n";
//         cout << z3.s1.find(z3.s2) << "\n";
//     }
//     else
//     {
//         cout << "nie\n";
//     }
//     cout << "--------------------\n";


    string text;

    cout << "Podaj tekst: ";
    getline(std::cin, text);
    cout<<"przed zamianą"<<text<<endl;
    for (char &c : text)
    {
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
    }

    cout << "Tekst po zamianie: " << text << endl;


    return 0;
}
