#include<iostream>

int main()
{
    std::cout << "Enter a single character: ";
    char c {};
    std::cin >> c;
    int i (c);
    std::cout << "You've entered \'" << c << "\', which has ASCII code " << i << ".";
    // Also possible with c-style casting.
}
