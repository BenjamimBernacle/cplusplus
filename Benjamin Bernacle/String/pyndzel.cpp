#include <iostream>
#include <vector>
#include <string>
std::string swapFirstAndThirdWord(std::string s = "Bob the bill")
{
    std::string firstWord = s.substr(0, s.find(" "));
    std::string secondWord = s.substr(s.find(" ") + 1, s.find(" ", s.find(" ") + 1) - s.find(" ") - 1);
    std::string thirdWord = s.substr(s.find(" ", s.find(" ") + 1) + 1);

    std::string result = thirdWord + " " + secondWord + " " + firstWord;
    std::cout << "result: " << result << std::endl;
    return result;
}

void letters(std::string str)
{
    for (char &c : str)
    {
        if (std::isupper(c))
        {
            c = std::tolower(c);
        }
        else if (std::islower(c))
        {
            c = std::toupper(c);
        }
    }
    std::cout << "result: ";
    std::cout << str << std::endl;
    return;
}
void ascii(std::string str)
{
    for (char &c : str)
    {
        if ((int)c >= 65 && (int)c <= 90)
        {
            c = (char)((int)c + 32);
        }
        else if ((int)c >= 97 && (int)c <= 122)
        {
            c = (char)((int)c - 32);
        }
    }
    std::cout << "result: ";
    std::cout << str << std::endl;
    return;
}
int main(){
    // swap third letter with first
    std::cout << "enter string with at least 2 spaces\n";
    std::string s;
    std::getline(std::cin, s);
    swapFirstAndThirdWord(s);
    // upper to lower, lower to upper
    std::cout << "enter string\n";
    std::cin >> s;
    ascii(s);
    // upper to lower, lower to upper ver. 2
    std::cout << "enter string\n";
    std::cin >> s;
    letters(s);
}