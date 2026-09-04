#include <iostream>
// best way is to write the inner loop then the outer loop.

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    
    
     for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if(j == 1 || j== 10){
                std::cout << "x";
            }else if (i == 1 || i == 5){
                std::cout << "x";
            }else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
