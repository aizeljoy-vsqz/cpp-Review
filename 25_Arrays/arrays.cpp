#include <iostream>
/*  Arrays -> A data structure that can  hold multiple values.
           -> values are accessed by index number.
           -> arrays should all  be inn the same data type.
*/
int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    string names[] = {"Aiz", "Zel", "Joy"};
    // Accessing arrays using index.
    cout << names[0] << endl;
    cout << names[1] << endl;
    cout << names[2] << endl;


    // Declaring an Array and set a size.
    string nickname[5];
    // Assingning value to an array.
    nickname[0] = "A";
    nickname[0] = "B";
    nickname[0] = "C";

    return 0;
}