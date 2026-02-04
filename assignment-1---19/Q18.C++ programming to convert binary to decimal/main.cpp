/******************************************************************************

Welcome to GDB Online.
Q18. Write a C++ programming to convert binary to decimal.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    
    cout << "enter a binary number: ";
    cin >> binary;
    
    int decimal = 0;
    int power = 0;
    
    // convert from right to left (least significant bit to most significant)
    for (int i = binary.length() - 1; i >= 0; i--) {
        char digit = binary[i];
        
        // validate binary digit
        if (digit != '0' && digit != '1') {
            cout << "error: invalid binary number! only 0s and 1s all owed." << endl;
            return 1;
        }
       
       // convert char to integer (0 or 1)
       int bit = digit - '0';
       
       // add to decimal value: bit* 2^power
       decimal += bit * pow(2, power);
       power++;
    }
    
    cout << "binary: " << binary << " = decimal: " << decimal << endl;
    
    return 0;
}