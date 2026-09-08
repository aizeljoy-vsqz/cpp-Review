#include <iostream>
/* Sizeof() -> determine the size in bytes of a:
            -> variablel, data-type, class, objects,etc.
*/

int main()
{
    using std::cout;
    double peso = 22.50;
    bool isEmployed = true;
    char initial = 'P';
    int num = 27;
    char sections[] = {'A', 'B', 'C'};
    std::string names[] = {"Aiz", "Zel", "Joy"};

    // to calculate the size of array using sizeof
    cout << sizeof(names) / sizeof(names[0]) << "element \n";
    cout << sizeof(peso) << " bytes";


    return 0;
}