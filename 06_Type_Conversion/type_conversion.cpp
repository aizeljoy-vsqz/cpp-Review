#include <iostream>
/* Type Conversion -> conversion a value of one data type to another 
                   -> implicit - automatic
                   -> explicit - precede value with new data type (int)
*/

int main(){

    // implicit: 
    int pi = 3.14;
    std::cout << pi <<'\n';

    // explicit:
    double num = (int) 40.55;
    int nums = 100;
    std::cout << num <<std::endl;
    std::cout << (char)nums;
    return 0;
}