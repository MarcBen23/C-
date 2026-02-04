/******************************************************************************

Welcome to GDB Online.
 Q8.. Write a C++ program that reads in an integer value from the user and checks if it is odd 
using the modulus operator. If it is odd, print "Odd number" to the screen, otherwise print 
"Even number". 

*******************************************************************************/
#include <iostream>

int main () {
    int number;
    
    // read integer from user
    std::cout << "enter an integer: ";
    std::cin >> number;
    
    // check if the numberis odd using modulus operator
    if (number % 2 != 0) {
        std::cout << "odd number" << std::endl;
    } else {
        std::cout << "even number" << std::endl;
    }    
    
    return 0;
}