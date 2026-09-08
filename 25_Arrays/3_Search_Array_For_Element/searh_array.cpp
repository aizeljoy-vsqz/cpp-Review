#include <iostream>
#include <vector>
/* Notes:
        linear search -> begin to the first element of an array and move to next until you reach what you search/end.
*/

int SearchMarksman(const std::vector<std::string> &arr, std::string search);

int main()
{
    std::vector<std::string> MarksmanHeroes = {"Lyla", "Obsidia", "Karie", "Irithel"};
    std::string search = "Estes";

    int index = SearchMarksman(MarksmanHeroes, search);

    if (index != 0){
        std::cout << search << "is at index " << index << "\n";
    }else{
        std::cout << search << " cannot be found";
    }

    return 0;
}

int SearchMarksman(const std::vector<std::string> &arr, std::string search)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == search){
            return i;
        }
    }
    return 0;
}