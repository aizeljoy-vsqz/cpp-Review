#include <iostream>
#include <array>
#include <vector>
/* notes: -> you only have to pass the array name in a function.
          -> when a function receives an array, it decays to a pointer.
             and the function no longer know what the size of the array,
             so we could pass it as an additional argument to let the function know the size.
          -> We used 3 ways to pass array to a function:
                - using raw  fixed array.
                - using fixed array.
                - using dynamic array.

*/
using std::array;
using std::cout;
using std::string;
using std::vector;

void printName(string names[], int size);
void printHeroes(array<string, 3> &arr);
void printEmployees(const vector<string> &vec);

int main()
{
    // legacy
    string names[] = {"Aiz", "Zel", "Joy"};
    int name_size = sizeof(names) / sizeof(names[0]); // calculate the size of the array explicitly.

    // using Fixed array
    array<string, 3> heroes = {"Estes", "Obsidia", "Nana"};

    // using Dynamic array
    vector<string> employees = {"Aizel Joy", "John Carlo"};

    printName(names, name_size);
    printHeroes(heroes);
    printEmployees(employees);
    return 0;
}

// --->>> function receives an array

// USING STD::ARRAY: for fixed size arrays
//    you must specify the size

void printHeroes(const array<string, 3> &arr)
{
    for (const auto &item : arr)
    {
        cout << item << "\n";
    }
}

// USING STD::VECTOR: for dynamic array
/*
    why put const and why without c?
    - Use const std::vector<T>& for everything else (printing, searching, calculating, etc.).
      It is the default best practice in C++.

    - Use std::vector<T>& only if the function's explicit job is to:
      modify, sort, or add items to the original vector.
*/
void printEmployees(const vector<string> &vec)
{
    for (const string &employee : vec)
    {
        cout << employee << "\n";
    }
}

// USING RAW FIXED-SIZE ARRAYS: (pointer + explicit size)
//    you pass size  parameters, so the function knows when to stop iterating.
void printName(string names[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << "\n";
    }
}