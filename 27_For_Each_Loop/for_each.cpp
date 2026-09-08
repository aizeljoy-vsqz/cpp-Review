#include <iostream>
/* Foreach loop -> loop that  eases the ttraversal over an iterable data set.
                -> start in the begining and go to the end
                -> it's  less syntax but less flexible compare to for loop.
*/

int main (){
    using std:: cout;
    using std::string;

    string employees [] = {"Aiz", "Zel", "Joy"};

    for(string emp : employees ){
        cout << emp;
    }

    return 0;
}