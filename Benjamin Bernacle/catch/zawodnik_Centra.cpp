#include <iostream>
using namespace std;
int main()
{
    try//catche łapią po typie wyrzucanej zmiennej
    {
        int wzrost ;
        double karzel;
        float przecietny;
    
        long int domyslny;
        cout << "podaj swoj wzrost \n";
        cin >> wzrost;
        if (wzrost < 160)
            throw 0.5;
        if (wzrost > 159 && wzrost <= 210)
            throw 1.0f;
        if (wzrost > 209 && wzrost <= 220)
            throw 69;
        if (wzrost > 220)
            throw domyslny;
    }
    catch (double)
    {
        cout << "metr 50 w kapeluszu idzie na koszykowke";
    }
    catch (int)
    {
        cout << "no to bedziesz centra";
    }
    catch (float)
    {
        cout << "no prawie prawie";
    }
    catch (...)
    {
        cout << "alien z marsa";
    }
    return 0;
}