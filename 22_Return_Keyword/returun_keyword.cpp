#include <iostream>
/*  return -> returna value back to the spot 
              where you called the encompassing function.
*/

int add(int a, int b);
int main()
{
    int num1 = 2;
    int num2 = 4;

    int total = add(num1, num2);
    std::cout << "The total of " << num1 << " + " <<num2 << " = " << total;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}