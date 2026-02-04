/******************************************************************************

Welcome to GDB Online.
Q5.. Write a C++ program that reads in two integer values from the user and checks if the first 
value is greater than the second using the greater than operator. If it is, print "First value 
is greater" to the screen, otherwise print "Second value is greater".
*******************************************************************************/
#include <iostream>
using namespace std;

int main () {
    int firstvalue, secondvalue;
    
    // get input from the user 
    cout << "enter first integer: ";
    cin >> firstvalue;
    
    cout << "enter second integer: ";
    cin >> secondvalue;
    
    // check if first value is greater than second value using > operator
    if (firstvalue > secondvalue) {
        cout << "first value is greater" << endl;
    } else {
        cout << "second value is greater" << endl;
        
    }    
    
    return 0;
    
}