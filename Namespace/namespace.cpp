#include <iostream>
/*
    Namespace
        - provide a solution for preventing name conflicts in large projets.
        - each entity needs a unique name.
        - a namespace allows for idenntically named entities as long as the namespaces are  differnt.
*/
namespace firstNum
{
    int num = 10;
}

namespace secondNum
{
    int num = 5;
}

int main()
{
    using namespace firstNum;
    using std::cout; //notes: 'using namespace std' is not best practice because theres a lot  refers to std

    int num = 0;

    // using prefix
    cout << "Using Prefix: " << firstNum::num << std::endl;

    // without using prefix
    cout << "Without usinng prefix: " << num;
    return 0;
}