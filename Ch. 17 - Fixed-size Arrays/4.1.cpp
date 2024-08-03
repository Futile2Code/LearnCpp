#include<string_view>
#include<array>
#include<iostream>

struct Item
{
    std::string_view name{};
    int gold{};
};

template <std::size_t N>
void printItems(const std::array<Item, N> &arr)
{
    for (size_t i = 0; i < N; i++)
    {
        std::cout << "A " << arr[i].name << " costs " << arr[i].gold << " gold.\n";
    }
    
}

int main()
{
    constexpr std::array arr {
        Item{"sword", 5},
        Item{"dagger", 3},
        Item{"club", 2},
        Item{"spear", 7}
    };
    printItems(arr);
}
