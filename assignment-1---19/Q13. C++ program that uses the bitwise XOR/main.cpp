/******************************************************************************

Welcome to GDB Online.
Q13.. Write a C++ program that uses the bitwise XOR operator to swap the values of two 
variables. 
*******************************************************************************/
#include <iostream>
using namespace std;

int main()  {
    int a, b;
    
    // get input from the user
    cout << "enter value for variable a: ";
    cin >> a;
    
    cout << "enter value for variable b: ";
    cin >> b;
    
    // display original values
    cout << "\nbefore swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    // swap using bitwise xor operator
    a = a ^ b; // step 1: a becomes a xor b
    b = a ^ b; // step 2: b becomes (a xor b) xor b = a
    a = a ^ b; // step 3: a becomes (a xor b) xor a = b
    
    // display swapped values 
    cout << "\nafter swapping using xor: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
    
}