#include <iostream>

// write your add function template here
template <typename T>
constexpr T add(T const& a, T const& b)
{
    return a + b;
}

template <typename T>
constexpr auto mult(T const& a, int const& b)
{
    return a * b;
}

template <typename T, typename U>
constexpr auto sub(T const& a, U const& b)
{
    return a - b;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

    std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
}
