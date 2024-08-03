#include <iostream>
#include <sstream>
#include <functional>
#include "random.h"

template <typename T>
auto get_input(std::string_view const, bool (*predicate)(T)) -> T;

int main()
{
    constexpr int lower_limit { 1 };
    constexpr int upper_limit { 100 };
    constexpr int tries { 7 };
    int winning_value{};
    int guess_value{};
    while (true)
    {
        winning_value = Random::get(lower_limit, upper_limit);
        std::cout << "Let's play a game. I'm thinking of a number between " << lower_limit << " and " << upper_limit << ". "
                  << "You have " << tries << " tries to guess what it is.\n";
        // std::cout << "PSST... " << winning_value << "!\n"; // Cheating... (for science.)
        for (size_t i = 1; i <= tries; i++)
        {
            std::stringstream ss{};
            ss << "Guess #" << i << ": ";
            guess_value = get_input(
                ss.str(),
                + [](int input)
                {
                    return 1 <= input && input <= 100;
                }
            );
            if (guess_value < winning_value)
            {
                std::cout << "Your guess is too low.\n";
                continue;
            }
            if (guess_value > winning_value)
            {
                std::cout << "Your guess is too high.\n";
                continue;
            }
            break;
        }
        if (guess_value == winning_value)
            std::cout << "Correct! You win!\n";
        else
            std::cout << "Sorry, you lose. The correct number was " << winning_value << ".\n";
        char const prompt_val {
            get_input(
                "Would you like to play again (y/n)? ",
                + [](char input)
                {
                    return input == 'y' || input == 'n' || input == 'Y' || input == 'N';
                }
            )
        };
        if (prompt_val == 'n' || prompt_val == 'N')
            break;
    }
    std::cout << "Thank you for playing.\n";
}

template <typename T>
auto get_input(std::string_view const prompt, bool (*predicate)(T)) -> T
{
    T input{};
    while (true)
    {
        std::cout << prompt.data();
        std::cin >> input;
        auto const failed { std::cin.fail() };
        std::cin.clear(); // If ¬fail, does nothing probably.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (failed)
            continue;
        if (std::cin.gcount() > 1)
            continue;
        if (predicate && predicate(input))
            break;
    }
    return input;
}
