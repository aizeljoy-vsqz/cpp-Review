#include <iostream>

// Arithmetic Operators -> returnn the result of a specific arithmetic operators (+ - * /).
          
int main (){

    int add = 1 + 1; // short version: 1+=1
    int multiply = 1 * 5; // short version: 1*=5
    int divide = 4/2;  // short version: 4/=2
    int subtract = 4-3; // short version: 4-/3
    int remainder = 10%3; // short version: 10%=3

    
    std::cout << (add*=5);
    return 0;
}
