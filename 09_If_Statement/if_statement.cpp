#include <iostream>
/* if statment -> do something if a condiition is true.
               -> if not, then don't do it.
*/

int main(){
    using std::cout;
    using std::cin;
    using std::string;
    char is_employed;

    cout << "Are you employed? Type Y(yes) and N(no): ";
    cin >> is_employed;

    if(is_employed == 'Y'){
        cout << "Congrats! you're employed.";
    }else if(is_employed == 'N'){
        cout << "Keep going you'll be employed soon.";
    }else{
        cout << "Invalid Input";
    }
    return 0;
}