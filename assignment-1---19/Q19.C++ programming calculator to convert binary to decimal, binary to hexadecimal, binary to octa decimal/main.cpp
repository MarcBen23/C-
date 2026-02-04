/******************************************************************************

Welcome to GDB Online.
 Q19.. Write a C++ programming calculator to convert binary to decimal, binary to 
hexadecimal, binary to octadecimal.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// function to check if a string is a valid binary number
bool isbinary(string bin) {
    for (char c: bin) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}


// function to convert binary to decimal
int binarytodecimal(string bin) {
    int decimal = 0;
    int power = 0;
    
    // traverse from right (lsb) to left (msb)
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;    
}

int main() {
    string binary;
    
    cout << "=== binary conversion calculator ===/";
    cout << "enter a binary number: ";
    cin >> binary;
    
    // validate input
    if (!isbinary(binary)) {
        cout << "invalid input! please enter a valid binary number (0s and 1s only)." << endl;
        return 0;
    }
    
    // convert to decimal
    int decimalvalue = binarytodecimal(binary);
    
    // convert decimal to hex and octal using std::hex and std::oct
    cout << "\n--- conversion results ---\n";
    cout << "binary: " << binary << endl; 
    cout << "decimal: " << decimalvalue << endl;
    
    // hexadecimal output
    cout << "hexadecimal: " << std::hex << decimalvalue << endl;
    
    // reset format flags and print octal
    cout << "octal: " << std::oct << decimalvalue << endl;
    
    
    return 0;
    
}