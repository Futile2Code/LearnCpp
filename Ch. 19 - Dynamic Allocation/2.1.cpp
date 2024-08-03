#include<iostream>
#include<string>
#include<algorithm>

int get_count()
{
    int count{};
    std::cin >> count;
    return count;
}

void get_names(std::string arr[], int const length)
{
    for (int i = 0; i < length; i++)
    (
        std::cout << "Enter name #" << i + 1 << ": ",
        std::getline(std::cin >> std::ws, arr[i])
    );
}

void print_names(std::string const arr[], int const length)
{
    for (int i = 0; i < length; i++)
        std::cout << "Name #" << i + 1 << ": " << arr[i] << "\n";
}

int main()
{
    std::cout << "How many names do you want to type? -> ";
    int count{ get_count() };

    std::string *arr{ new std::string[count] };
    
    get_names(arr, count);
    std::cout << '\n';

    std::sort(arr, arr + count);

    std::cout << "Here is your sorted list:\n";
    print_names(arr, count);

    delete[] arr;
}
