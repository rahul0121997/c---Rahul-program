#include<iostream>
using namespace std;

int main() {
    // Declare some variables for demonstration
    int a = 10, b = 5, c = 3;
    bool x = true, y = false;

    // Arithmetic Operators
    cout << "Arithmetic Operators: " << endl;
    cout << "a + b = " << a + b << endl;  // Addition
    cout << "a - b = " << a - b << endl;  // Subtraction
    cout << "a * b = " << a * b << endl;  // Multiplication
    cout << "a / b = " << a / b << endl;  // Division
    cout << "a % b = " << a % b << endl;  // Modulus (remainder of a/b)
    cout << "++a = " << ++a << endl;      // Pre-increment (increments before usage)
    cout << "b-- = " << b-- << endl;      // Post-decrement (decrements after usage)
    cout << "b (after b--) = " << b << endl;

    // Relational Operators
    cout << "\nRelational Operators: " << endl;
    cout << "a == c: " << (a == c) << endl; // Equal to (returns 0 or 1)
    cout << "a != c: " << (a != c) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "b < c: " << (b < c) << endl;   // Less than
    cout << "a >= c: " << (a >= c) << endl; // Greater than or equal to
    cout << "b <= c: " << (b <= c) << endl; // Less than or equal to

    // Logical Operators
    cout << "\nLogical Operators: " << endl;
    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;         // Logical NOT

    // Bitwise Operators
    cout << "\nBitwise Operators: " << endl;
    cout << "a & b = " << (a & b) << endl;  // Bitwise AND
    cout << "a | b = " << (a | b) << endl;  // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl;  // Bitwise XOR
    cout << "~a = " << (~a) << endl;        // Bitwise NOT (inverts all bits)
    cout << "a << 1 = " << (a << 1) << endl; // Left shift (a * 2^1)
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift (a / 2^1)

    return 0;
}
