#include <iostream>
#include <random>
/* pseudo-random -> NOT truly random (but close)
   rand() -> poor randomness quality, limited range, and bias using modulo
   the recommended modern approach is to use the <random> library introduced in C++11
*/
int main()
{
    using std::cout;

    // Modern Way: Recommmended

    // Obtain a random seed from the hardware
    std::random_device rd;
    // Initialize the Mersenne Twister pseudo-random execution engine
    std::mt19937 gen(rd());
    // Define the distribution range [inclusive, inclusive]
    std::uniform_int_distribution<> distr(1, 6);
    // Generate random number
    int random_num = distr(gen);
    cout << random_num << "\n";

    // Old Way
    srand(time(NULL)); // seed random gen wit the  current time
    int random = (std::rand() % 6) + 1;
    cout << random << "\n";

    return 0;
}