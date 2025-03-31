#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char marka[15], model[15], rokProdukcji[5];
    cout << "Podaj marka samochodu: ";
    cin.get(marka, 15);
    cin.ignore(15, '\n');
    cout << "Podaj model samochodu: ";
    cin.get(model, 15);
    cin.ignore(15, '\n');
    cout << "Podaj rok produkcji auta: ";
    cin.get(rokProdukcji, 5);
    cin.ignore(15, '\n');
    cout << "Marka to: " << marka << ", Model to: " << model << ", Rok produkcji to: " << rokProdukcji;
    cout << "\n ----------------------------- \n";
    char slowo1[20], slowo2[20], slowo3[20];
    cout << "Podaj pierwsze slowo: ";
    cin.get(slowo1, 20);
    cin.ignore(20, '\n');
    cout << "Podaj drugie slowo: ";
    cin.get(slowo2, 20);
    cin.ignore(20, '\n');
    cout << "Podaj trzecie slowo: ";
    cin.get(slowo3, 20);
    cin.ignore(20, '\n');
    strcat(slowo1, ", ");
    strcat(slowo1, slowo2);
    strcat(slowo1, ", ");
    strcat(slowo1, slowo3);
    cout << "Polaczone slowa: " << slowo1;
    cout << "\n ----------------------------- \n";
    char slowko1[20], slowko2[15];
    cout << "Podaj pierwsze slowo: ";
    cin.get(slowko1, 20);
    cin.ignore(20, '\n');
    cout << "Podaj drugie slowo: ";
    cin.get(slowko2, 20);
    cin.ignore(20, '\n');
    int identycznoscLiczb = strcmp(slowko1, slowko2);
    if (identycznoscLiczb == 0)
    {
        cout << "Slowa sa identyczne.";
    }
    else
    {
        cout << "Slowa sa inne.";
    }
    cout << "\n ----------------------------- \n";
    char jeden[20], dwa[20];
    cout << "Podaj pierwsze slowo: ";
    cin.get(jeden, 20);
    cin.ignore(20, '\n');
    cout << "Podaj drugie slowo: ";
    cin.get(dwa, 20);
    cin.ignore(20, '\n');
    if (strstr(jeden, dwa) != NULL)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }
    cout << "\n ----------------------------- \n";
    char nazwaMiejscowosci[50];
    cout << "Podaj pelna nazwe miasta: ";
    cin.getline(nazwaMiejscowosci, 50);
    cout << nazwaMiejscowosci;
    cout << "\n ----------------------------- \n";
    char jedynka[20], dwojka[20];
    cout << "Podaj pierwsze slowo: ";
    cin.get(jedynka, 20);
    cin.ignore(20, '\n');
    cout << "Podaj drugie slowo: ";
    cin.get(dwojka, 20);
    cin.ignore(20, '\n');
    strcpy(jedynka, dwojka);
    cout << "Pierwsze slowo: " << jedynka << ", Drugie slowo: " << dwojka;
    return 0;
}