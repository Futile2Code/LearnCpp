#include <iostream>

auto calculate(int const a, int const b, char const op) -> int
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    }

    std::cout << "Invalid operation '" << op << "'!";
    return 0;
}
