#include <iostream>

using degrees_t = double;
using radians_t = double;

namespace constants
{
    inline constexpr radians_t pi { 3.14159 };
}

double convertToRadians(degrees_t degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    degrees_t degrees{};
    std::cin >> degrees;

    radians_t radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
