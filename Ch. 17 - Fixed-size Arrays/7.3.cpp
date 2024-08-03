#include<iostream>
#include<math.h>

constexpr int ps[]{0, 1, 4, 9};

int main()
{
    while (true)
    {
        std::cout << "Enter a single digit integer, or -1 to quit: ";
        int a{};
        std::cin.clear();
        std::cin >> a;
        if (a == -1)
        {
            std::cout << "Bye!\n";
            break;
        }
        if (a < -1 || a > 9)
            std::cout << "Invalid input!\n";
        else
        {
            bool found { false };
            for (size_t i = 0; i < (sizeof(ps) / sizeof(int)); i++)
                if (a == ps[i])
                {
                    found = true;
                    break;
                }
            std::cout << a
                      << (
                            found ? " is a perfect square.\n" : " is not a perfect square.\n"
                        );
        }
    }
}
