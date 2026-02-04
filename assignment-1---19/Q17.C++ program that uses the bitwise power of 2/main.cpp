/******************************************************************************

Welcome to GDB Online.
Q17..Write a C++ program that uses the bitwise AND operator to check if a number is a power 
of 2. 

*******************************************************************************/
#include <iostream>
using namespace std;

int main () {
    int number;
    
    // get input from the user
    cout << "enter an integer: ";
    cin >> number;
    
    // check if number is a power of 2 using bitwise and operator
    // for postive number: (number & (number - 1)) == 0
    if (number > 0 && (number & (number - 1 )) == 0) {
        cout << number << " is a power of 2" << endl;
    } else {
        cout << number << " is not a power of 2" << endl;
    } 
    
    return 0;
}