#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(const int count)
{
    if (count < 0)
    {
        return "negative";
    }
    switch (count)
    {
    case 0:
        return "no";
        break;
    case 1:
        return "a single";
        break;
    case 2:
        return "a couple of";
        break;
    case 3:
        return "a few";
        break;
    default:
        return "many";
        break;
    }
}

// Write the function getApplesPluralized() here
constexpr std::string_view getApplesPluralized(const int count)
{
    return count == 1 ? "apple" : "apples";
}

int main()
{
    using namespace std::string_view_literals;
    
    constexpr int maryApples { 3 };
    std::cout << "Mary has "sv << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? "sv;
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have "sv << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
