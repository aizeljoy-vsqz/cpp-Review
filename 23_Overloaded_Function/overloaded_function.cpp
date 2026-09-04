#include <iostream>
/* overloading function -> function with the same name but  different parameters 
  parameter ->  is known as function signature, each function signature should be unique
                        

*/

int add(int a, int b);
int add(int a, int b, int c);

int main()
{
    using std::cin;
    using std::cout;

    int num1 = 1, num2 = 2, num3 = 3, total, total_sum; 
    total = add(num1, num2);
    total_sum = add(num1, num2, num3);

    cout <<"The total of " << num1 << " + " << num2 << " = " << total << "\n";
    cout <<"The total of " << num1 << " + " << num2 << " = " << total_sum << "\n";
    return 0;

    

}

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
