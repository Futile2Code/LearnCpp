#include<iostream>

constexpr bool isEven(int const a)
{
    return a % 2 == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int a{};
    std::cin >> a;
    std::cout << a << (isEven(a) ? " is even" : " is odd");
}
