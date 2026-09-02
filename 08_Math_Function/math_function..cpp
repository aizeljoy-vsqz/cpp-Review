#include <iostream>
#include  <cmath>

int main(){
    using std::cout;
    int a = 2, b = 3, c = 22.4, result;

    
    result = std::max(a,c); 
    result = std::min(a,b);
    result = std::round(c);
    result = std::sqrt(b);
    result = std::pow(a,b);
    result = std::ceil(c);
    result = std::floor(c);
    result = std::abs(-5); // it makes negative to positive.

    cout << "Result: " << result;
    return 0;
}   