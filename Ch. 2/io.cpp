#include "io.hpp"
#include <iostream>

int readNumber()
{
    int num {};
    std::cin >> num;
    return num;
}

void printNumber(int x)
{
    std::cout << "Result: " << x << '\n';
}
