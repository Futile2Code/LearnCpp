#include<iostream>

int& something()
{
  static int lvalue = 0;
  lvalue++;
  return lvalue;
}

int main()
{
  something() = 3; // Sets "lvalue" to 3.
  std::cout << something() << '\n';
  std::cout << something() << '\n';
  std::cout << something() << '\n';
  something() = -1;
  std::cout << something() << '\n';
}
