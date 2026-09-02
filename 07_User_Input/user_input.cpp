#include <iostream>

/* cout << (insertion operator)
   cin >> (extraction operator)

   Notes: 
    -> using cin, it stops reading when it encounters space, use getline instead.
    -> using getline, if you accepts user input w/cin followed by getline it accepts the newline that's  why it reads the first input. 
    -> to avoid reading the input above your getline you shoud add std::ws.
*/

int main(){
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::getline;

    string job;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "What is your job?: "; 
    getline(cin >>std::ws, job); // notes: std::ws removes the newline char or any white spaces before any user input.
    
    cout << "Name: " << name << endl;
    cout << "Job: " << job << endl;
    return 0;
}