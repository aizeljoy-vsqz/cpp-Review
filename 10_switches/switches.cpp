#include <iostream>
/* switch-case -> alternantive to using many "else-if" statement.
               -> compare one value against matching case.
               -> c++ limits switch expression to integral type (such as int, char, bool, & enum).
*/

int main() {
    using std::cout;
    using std::cin;
    
    int field;

    cout << "Enter your field use the number ex: 1 (1 - CSS, 2 - IT, 3 - OTHERS): ";
    cin >> field; 
    
    switch (field){
        case 1:
            cout << "Your field is CSS.";
            break;
        case 2: 
            cout << "Your field is IT.";
            break;
        case 3: 
            cout << "OTHERS";
            break;
        default: 
            cout << "Invalid Input!";
    }
    return 0;
}