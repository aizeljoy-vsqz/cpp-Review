#include <iostream>
#include <array>
/* fill() -> Fills a range of elements with specified value.
          -> syntax: fill (begin, end, value)
*/

using std::cout;
using std::array;
using std::string;

int main(){
    // Fixed Array:
    array<string, 5> fill_panget;

    std::fill(fill_panget.begin(), fill_panget.end(), "PANGET");
    for(string p : fill_panget){
        cout << p << "\n";
    }


    // Raw Fixed Array:
    int size = 4;
    string arr [size];
    std::fill(arr, arr + (size/2), "Array");
    std::fill(arr + (size/2), arr + size, "TEST");
    for(string a: arr){
        cout << a << " ";
    }

    return 0;
}