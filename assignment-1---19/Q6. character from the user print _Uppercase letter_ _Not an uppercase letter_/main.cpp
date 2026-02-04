/******************************************************************************

Welcome to GDB Online.
Q6.. Write a C++ program that reads in a character from the user and checks if it is an 
uppercase letter using the logical AND operator and the isupper() function. If it is, print 
"Uppercase letter" to the screen, otherwise print "Not an uppercase letter". 

*******************************************************************************/
#include <iostream>
#include <cctype> // for isupper() function
using namespace std;

int main () {
    char userchar;
    
    // get input from the user 
    cout << "enter a character: ";
    cin >> userchar;
    
    // check if the character is uppercase using isupper() function
    // and logical operator is used to ensure we're working with a valid character
    if (isupper(userchar)) {
        cout << "uppercase letter" << endl;
    } else {
        cout << "not an uppercase letter" << endl;
    }    
    
    return 0;
}
