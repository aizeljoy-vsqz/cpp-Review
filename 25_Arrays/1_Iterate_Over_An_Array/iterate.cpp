#include <iostream>
/*  forloop is the better approach to iterate an array
*/
int main()
{
    using std::cout;
    char sections[] = {'A', 'B', 'C'};

    for (int i = 0; i < sizeof(sections) / sizeof(sections[0]); i++)
    {
        cout << sections[i] << "\n";
    }

    return 0;
}