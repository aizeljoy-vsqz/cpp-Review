#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

/* Sort
   Bubble sort -> an easy sorting algrithm  but not efficient
               -> begin at index 0, examine the element in the right
                  if it's larger swap it to the left and repeat until you reach the end.

   std::sort(<begin>,<end>) -> the eaiest way and most efficient way sort is the built in sort.
*/

using std::cout;
void bubbleSort(int arr[], int size);

int main()
{
    // Raw Fixed Sized Array:
    int num[] = {3, 9, 6, 8, 1, 2, 5, 7, 10, 4};
    int size = sizeof(num) / sizeof(num[0]);

    // Fixed Array:
    std::array<int, 3> arr = {2, 3, 1};

    // Dynamic Array (Vector): Recommended
    std::vector<int> number = {2, 7, 3, 1, 4, 6, 5};

    // std::sort(num, num + size); // sort: using raw fixed array
    // std::sort(arr.begin(), arr.end()); // sort: using fixed array:
    std::sort(number.begin(), number.end()); // sort: using fixed array:

    for (int n : number)
    {
        cout << n << " ";
    }

    return 0;
}

// Bubble Sort Function
void bubbleSort(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}