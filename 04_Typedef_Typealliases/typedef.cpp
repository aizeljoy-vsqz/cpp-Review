#include <iostream>

/*  typedef -> reserved keyword used to createan additional name (allias) for another data type.
            -> New identifier for an existing datatype.
            -> Helps with readability and reduces typos.
            -> Use when there is a clear benefit.
            -> Recommended: use 'using' keyword instead of typedef (work better w/ templates).

    using   -> Recommended
            -> using keyword is most popular than typedef nowadays bacause it more suitable in template.
*/

// ---------------------------------------------------------------------------------------------------------
/* notes: typedef
        -> syntax : < datatype allias_t >
        -> _t means type
*/
typedef std::string thisIsString_t;
typedef bool thisIsBoolean_t;
// ---------------------------------------------------------------------------------------------------------

/* notes: using
        -> syntax: <using datatype>
*/
using String = std::string;

int main()
{
    // notes: instead of using 'std::string' you can use the allias.
    thisIsString_t full_name = "Aizel Joy Vasquez";
    String name = "Aizel";
    
    std::cout << "Full Name " << full_name;

    return 0;
}