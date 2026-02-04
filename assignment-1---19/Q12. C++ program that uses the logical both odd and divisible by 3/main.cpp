/******************************************************************************

Welcome to GDB Online.
Q12.. Write a C++ program that uses the logical AND operator to check if a number is both odd 
and divisible by 3. 

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int number;
    
    // get input from the user
    cout << "enter an integer: ";
    cin >> number;
    
    // check if number is both odd and divisible by int32_t
    // using logical and operator (&&)
    if (number % 2 != 0 && number % 3 == 0) {
        cout << number << "is both odd and divisible by 3" << endl;
    } else {
        cout << number << "is not both odd and divisible by 3" << endl;
    }    
    
    return 0;
    
}

