#include <iostream>
/* Ternary Operator -> replacement to an if-else statement.
                    -> syyntax: condition ? expression1 : expression2;
*/

int 
main (){
    using std::cout;
    using std::cin;
    using std::string;

    char learn;
    cout << "Do you want to learn C++? Y (Yes) and N (No)";
    cin >> learn;

    (learn == 'Y') ? cout << "Start your journey learning c++ now." << '\n' : cout << "Try c++ it's fun to learn." << '\n';


    int num = 3;
    num % 2 == 1 ? cout << "Odd Number" : cout << "Even Number";  
    return 0;
}