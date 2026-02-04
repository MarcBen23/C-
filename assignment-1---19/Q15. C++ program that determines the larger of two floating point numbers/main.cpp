/******************************************************************************

Welcome to GDB Online.
Q15.. Write a C++ program that uses the conditional operator to determine the larger of two 
floating point numbers. 

*******************************************************************************/
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main () {
    double num1, num2;
    
    // get input from the user
    cout << "enter first floating point number: ";
    cin >> num1;
    
    cout << "enter sceond floating point number: ";
    cin >> num2;
    
    // using conditional (ternary) operator to find the larger number
    double larger = (num1 > num2) ? num1 : num2;
    
    // display the result with precision 
    cout << fixed << setprecision(4);
    cout << "\nthe larger number is: " << larger << endl;
    
    return 0;
}