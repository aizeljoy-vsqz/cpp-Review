#include <iostream>
// for-loop -> is a block of code and specify amount of time.

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << '\n';
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}