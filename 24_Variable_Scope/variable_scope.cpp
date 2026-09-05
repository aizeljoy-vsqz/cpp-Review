#include <iostream>
/* Local variable -> declared inside a function or a block {}.
   Global variable -> declared outside of all functions.


   scope resolution operator (::) -> precede your var name with two colon // syntax: ::varName
                                  -> scope resolution is used when you want to use the global var instead of your local var.


   Notes: avoid global var as you can because it pollutes the global namespace
          variable declared  within a function are much secure
*/

void print_number();

// global variable
int num = 1;

int main(){
    int num = 2;

    // printing the global variable using scope resoolution variable.
    std::cout << ::num << "\n";
    // printing the local variable from main function.
    std::cout << num << "\n";
    // printing the local var from other function.
    print_number();
    

    return 0;
}

void print_number(){
    // local variable
    int num = 3;
    std::cout << num << "\n";
}