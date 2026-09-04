#include <iostream>
/* break -> break out of a loop.
   continue -> skip current iteration.
*/

int main()
{

    for (int i = 5; i <= 15; i += 5)
    {
        if (i == 10)
        {
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}
