#include <iostream>
/* while loop -> like an if statement, while true run the code repeatedly,
              -> the different is if-statement can't repeatedly execute the code
              -> syntax: while(conditon)

*/
int main()
{
    int num = 0;
    while (num < 3)
    {
        std::cout << num << std::endl;
        num++;
    }

    std::string sorry;

    while (!(sorry == "Sorry"))
    {
        std::cout << "Say Sorry: ";
        std::cin >> sorry;
    }

    std::cout << "Okayyyy!";
    return 0;
}