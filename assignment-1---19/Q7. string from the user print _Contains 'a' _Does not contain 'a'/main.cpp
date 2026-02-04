/******************************************************************************

Welcome to GDB Online.
Q7.. Write a C++ program that reads in a string from the user and checks if it contains the 
character 'a' using the in operator. If it does, print "Contains 'a'" to the screen, otherwise 
print "Does not contain 'a'". 

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main () {
    string userinput;
    
    // get input from the user
    cout << "enter a string: ";
    getline(cin, userinput);
    
    // check if string contains 'a' using find() function
    // find() return string::npos if character is not found
    if (userinput.find('a') != string::npos) {
        cout << "contains  'a'" << endl;
    } else {
        cout << "does not contain  'a'" << endl;
    }    
        
    return 0;
}    
    
    
