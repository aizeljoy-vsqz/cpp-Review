#include <iostream>
/* length() -> check the length of string.
   empty() -> check f the string is empty.
   clear() -> clear the string value.
   append() -> Add string // syntax: string.append(string)
   at() ->  return the charater value in string // syntax: at (index)
   insert() -> insert value in a string // syntax: insert(position, string)
   find() -> return the index of char. // syntax: find(char)
   erase() -> erase the portion of a string // syntax: erase(beginning index, end index)

*/
int main (){
    using std::cout;
    using std::endl;
    using std::string;

    string  name = "Aizel Joy";

    cout << "length method: " << name.length() << endl;
    cout << "empty method: " << name.empty() << endl;
    name.clear();
    cout << "clear method: " << name <<endl;
    name = "Aizel Joy";
    cout << "append method: " << name.append(" Vasquez") << endl;
    cout << "at method: " << name.at(2) << endl;
    cout << "insert method: " << name.insert(0, "Hello! ") << endl;
    cout << "find method: " << name.find('z') << endl;
    cout << "erase method: " << name.erase(0,6) << endl;
    return 0;
}