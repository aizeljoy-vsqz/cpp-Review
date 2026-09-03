#include <iostream>
/* && -> check if two conditions are true
   || -> check if  at least one or two conditions are true
   ! -> reverses the logical state of its operand.
*/

int main (){
    using std:: cout;
    using std::cin;
    using std::getline;
    using std:: string;

    string field = "CCS";
    string name;
    int age;
    string password = "password";
    string user = "Aizel";


    // Code that check if users is related to computer field, using || and ! logical opperator.
    if (field == "CCS" || field == "IT"){
        cout << "Computer Geeks Site. \n";
        cout << "Enter your name: ";
        getline (cin, name);
        cout << "Enter yor age: ";
        cin >> age;

        if (!(age >= 18)){
            cout << "Sorry you're under age you cannot enter this site." << std::endl;
        }else  if (age >= 18){
            cout << "Welcome to Computer Geeks Site " << name << std::endl;
        }else cout << "Invalid Input";
    } 

    // usig && operator
    (user == "Aizel" && password == "password") ? cout << "Valid \n" : cout << "Invalid \n";

    return 0;
} 