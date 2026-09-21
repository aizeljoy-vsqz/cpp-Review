#include <iostream>

int main()
{
    std::string food[5];
    int size = sizeof(food) / sizeof(food[0]);
    std::string temp;
    for(int i = 0; i < size ; i++){
        std::cout << "Enter your favorite foods or 'q' to quit: ";
        std::getline(std::cin, temp);
       if (temp == "q"){
            break;
        }else{
            food[i] = temp;
        }
    }


    std::cout << "You like the following foods: \n";

    for (int i = 0; !food[i].empty(); i++){
        std::cout << food[i] << "\n";
    }

    return 0;
}