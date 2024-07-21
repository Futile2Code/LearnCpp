#include "io.hpp"

int main()
{
    int a { readNumber() }, b { readNumber() };
    printNumber(a + b);
}
