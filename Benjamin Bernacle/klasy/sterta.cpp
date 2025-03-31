#include <iostream>
using namespace std;

class dynamicTest
{
    int id;

public:
    string name;

    void setId(int inputId)
    {
        id = inputId;
    }

    int getId()
    {
        return id;
    }
};

int main()
{

    dynamicTest *w_testClass = new dynamicTest;

    w_testClass->name = "cipek";
    w_testClass->setId(12345678);

    cout << w_testClass->name << endl;
    cout << w_testClass->getId() << endl;

    delete w_testClass;
}