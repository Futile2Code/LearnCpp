#include<iostream>

void bubble_sort(int arr[], size_t size)
{
    // Comparing against the previous element
    bool verify{ true };
    while (verify && (size > 1))
    {
        verify = false;
        for (size_t i = 1; i < size; i++)
            if (arr[i - 1] > arr[i])
            {
                int const temp{ arr[i] };
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                verify = true;
            }
        size--;
    }
}

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    constexpr int size = sizeof(array) / sizeof(int);

    bubble_sort(static_cast<int*>(array), size);

    for (size_t i = 0; i < size; i++)
        std::cout << array[i] << ' ';
    
    std::cout << '\n';
}
