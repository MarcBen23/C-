/******************************************************************************

Welcome to GDB Online.
 Q10.. Write a C++ program that uses the ternary operator to determine the larger of two 
integers. 

*******************************************************************************/
#include <iostream>
using namespace std;

int main () {
    int num1, num2, larger;
    
    // get input from the user
    cout << "enter first integer: ";
    cin >> num1;
    
    cout << "enter second integer: ";
    cin >> num2;
    
    // using ternary operator to find the larger number
    larger = (num1 > num2) ? num1 : num2;
    
    // dispaly the result 
    cout << "the larger number is: " << larger << endl;
    
    return 0;
}