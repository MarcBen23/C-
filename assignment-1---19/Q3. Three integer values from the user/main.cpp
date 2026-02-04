/******************************************************************************

Welcome to GDB Online.
Q3..VWrite a C++ program that takes in three integer values from the user and checks if they 
are equal using the equality operator. If they are equal, print "Equal" to the screen, 
otherwise print "Not equal.
*******************************************************************************/
#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;
    
    // get input from the user
    cout << "enter first integer: " ;
    cin >> num1;
    
    cout << "enter second integer: ";
    cin >> num2;
    
    cout << "enter third integer: ";
    cin >> num3;
    
    // check if all three numbers are equal using equality operators
    if (num1 == num2 && num2 == num3) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
    return 0;
    
}


