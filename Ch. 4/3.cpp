#include<iostream>

float calculate_height(int h, int t)
{
    return (float)h - 9.8f * (float)(t * t)/2;
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    int og_height {};
    std::cin >> og_height;
    float current_height {};
    for (int i = 0; i < 6; i++)
    {
        current_height = calculate_height(og_height, i);
        if (current_height <= 0.0f)
        {
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
            break;
        }
        std::cout << "At " << i << " seconds, the ball is at height: " << current_height << " meters\n";
    }
}
