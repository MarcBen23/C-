/******************************************************************************

Welcome to GDB Online.
Q4.Write a C++ program that reads in a string from the user and checks if it is equal to the 
string "hello" using the equality operator. If it is equal, print "Hello!" to the screen, 
otherwise print "Goodbye!". 

*******************************************************************************/
#include <iostream>
#include <string> 
using namespace std;

int main () {
    string userinput;
    
    // get input from the user
    cout << "enter a string: ";
    getline(cin, userinput);
    
    // check if the input is equal to "hello" using equality operator
    if (userinput == "hello") {
        cout << "hello!" << endl;
    } else {
        cout << "goodbye!" << endl;
    }    
    
    return 0;
}
