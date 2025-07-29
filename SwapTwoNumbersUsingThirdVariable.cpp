// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int a  = 5;
    int b = 10;
    
    std::cout << "a: " << a << "\n";
    std::cout << "b:" << b << "\n";
    
    // Swapping with a third variable
    int c = a;
    a = b;
    b = c;
    
    std::cout << "a: " << a << "\n";
    std::cout << "b:" << b << "\n";

    return 0;
}
