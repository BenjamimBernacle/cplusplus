#include <iostream>
template <typename T1,typename T2, typename T3> 
T1 obwodTrojkat(T1 bok1, T2 bok2, T3 bok3)
{
return (bok1 + bok2 + bok3);
} 
int main() 
{
float bok1 {1.54}, bok2 {3.21}, bok3{4.32}; 
std::cout << "Obwód trojkata: " << obwodTrojkat<float,int,float>(bok1, bok2, bok3) << std::endl;
std::cout << "Obwód trojkata: " << obwodTrojkat<int,int,int>(bok1, bok2, bok3) << std::endl; 
return 0;
}