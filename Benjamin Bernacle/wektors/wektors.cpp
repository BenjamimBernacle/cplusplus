#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> quantity{3,5,8,4};

    // vector<int>::iterator it = quantity.begin();
    // it++;
    // quantity.insert(it,8);
    // cout<<quantity[1];

    // for (;;)
    // {
    //     char chose;
    //     cout << "Czy chcesz podać liczbe ?\n    T - Tak\n    N - Nie\n\n";
    //     cin >> chose;
    //     if (chose == 'T')
    //     {
    //         int temp = 0;
    //         cout << "\nPodaj liczbe : ";
    //         cin >> temp;
    //         quantity.push_back(temp);
    //     }
    //     else if (chose == 'N')
    //     {
    //         break;
    //     }
    // }

    // int i = 0;
    // cout << "Vector to : \n";
    // for (int number : quantity)
    // {
    //     cout << quantity[i];
    //     i++;
    // }
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> numbers;
//     int num1, num2, num3;

//     // Pobranie trzech liczb od użytkownika
//     std::cout << "Podaj trzy liczby oddzielone spacjami: ";
//     std::cin >> num1 >> num2 >> num3;

//     // Wstawienie liczb na początku, na końcu i na drugiej pozycji wektora
//     numbers.push_back(num1);
//     numbers.push_back(num3);
//     numbers.insert(numbers.begin() + 1, num2);

//     // Usunięcie elementu na trzeciej pozycji
//     numbers.erase(numbers.begin() + 2);

//     // Znalezienie liczb podzielnych przez 3
//     std::vector<int> divisible_by_3;
//     for (int number : numbers) {
//         if (number % 3 == 0) {
//             divisible_by_3.push_back(number);
//         }
//     }

//     // Wyświetlenie wektora z liczbami podzielnymi przez 3
//     std::cout << "Liczby podzielne przez 3: ";
//     for (int number : divisible_by_3) {
//         std::cout << number << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

//     return 0;
// }
