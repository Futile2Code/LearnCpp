#include<iostream>
#include<string>
#include<functional>

using ArithmeticFunction = std::function<int(int, int)>;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

ArithmeticFunction getArithmeticFunction(char const op)
{
    switch (op)
    {
    case '+':
        return add;
    case '-':
        return subtract;
    case '*':
        return multiply;
    case '/':
        return divide;
    default:
        return nullptr;
    }
}

int main()
{
    std::cout << "Enter two ints: ";
    int a{}, b{};
    std::cin >> a >> b;

    std::cout << "Enter an operation (+, -, *, /): ";
    char op{};
    do
    {
        std::cin >> op;
        if (op != '+' && op != '-' && op != '*' && op != '/')
            std::cout << "Invalid input! Retry: ";
    } while (op != '+' && op != '-' && op != '*' && op != '/');

    std::cout << a << " " << op << " " << b << " = " << getArithmeticFunction(op)(a, b) << '\n';
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}
