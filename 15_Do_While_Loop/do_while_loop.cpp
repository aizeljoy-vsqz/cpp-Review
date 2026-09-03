#include <iostream>
// do-while-loop -> do some block of coode first THEN repeat again if condition is true.

int main()
{
    // do while loop example.
    int num = 0;
    std::string password;
    do {
        std::cout << "Hello \n";
        num++;
    } while (num < 3);


    //--- > Code that creates password using do while loop.
    do{
        std::cout << "Enter a valid password: (password must be 8 character.): ";
        std::cin >> password;
    } while (password.size() < 8);

    std::cout << "Password Created!";

    // Code that creates password using do while loop. <---

    return 0;
}