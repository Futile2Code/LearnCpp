#include <iostream>

int main()
{
    std::cout << "Enter a whole number: ";
    int a{};
    std::cin >> a;
    std::cout << "Double " << a << " is: " << a * 2 << "\n";
    std::cout << "Triple " << a << " is: " << a * 3 << "\n";
}
