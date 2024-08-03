#include<iostream>
#include<array>

int main()
{
    constexpr std::array arr { 'H', 'e', 'l', 'l', 'o' };
    std::cout << "The length is " << arr.size() << '\n' << arr[1] << arr.at(1) << std::get<1>(arr);
}
