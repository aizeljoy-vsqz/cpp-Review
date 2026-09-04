#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int random = rand() % 3 + 1;

    switch (random)
    {
    case 1:
        std::cout << "Chocolate mutation";
        break;
    case 2:
        std::cout << "Zombie mutation";
        break;
    case 3:
        std::cout << "Gold mutation";
        break;
    }
    return 0;
}