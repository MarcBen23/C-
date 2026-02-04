/******************************************************************************

Welcome to GDB Online.
  Q1.. write a c++ program that takes in two integer values from the user and calculates the 
  sum,difference, product, and quotient using the appropriate operators.
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    int num1, num2;
    
    // get input from the user 
    cout << "enter first integer: ";
    cin >> num1;
    
    cout << "enter second integer:";
    cin >> num2;
    
    //calculate results
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    
    // display results 
    cout << "\nresults: " << endl;
    cout << "sum: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "difference: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "product: " << num1 << " * " << num2 << " = " << product << endl;
    
   // handle quotient separately to aviod division by zero
   if (num2 != 0) {
       int quotient = num1 / num2;
       cout << "quotient: " << num1 << " / " << num2 << " = " << quotient << endl;
   } else {
       cout << "quotient: cannot divide by zero! " << endl;
       
   } 
   
   return 0;
   }