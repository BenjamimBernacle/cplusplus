#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
 
  double d=1.23123123123123123123123123123;
  float f=1.23123123123123123123123123123;
  cout << std::setprecision(20) << f << '\n';
  cout << std::setprecision(20) << d << '\n';
}
