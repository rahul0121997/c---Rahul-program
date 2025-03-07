#include<iostream>
using namespace std;

int main() {
    // Define variables with different data types
    int intVar = 10;                // Integer variable
    float floatVar = 5.75;          // Float variable
    double doubleVar = 123.456;     // Double variable
    char charVar = 'A';             // Character variable
    bool boolVar = true;            // Boolean variable

    // Define constants
    const float PI = 3.14159;       // Constant for Pi
    const int MAX_STUDENTS = 50;    // Constant for max students

    // Performing operations
    int intSum = intVar + 20;       // Adding to integer
    float floatMul = floatVar * 2;  // Multiplying float
    double doubleDiv = doubleVar / 2;  // Dividing double
    char nextChar = charVar + 1;    // Increment character
    bool isGreater = intVar > 5;    // Checking boolean condition

    // Output the results
    cout << "Integer Variable: " << intVar << endl;
    cout << "Float Variable: " << floatVar << endl;
    cout << "Double Variable: " << doubleVar << endl;
    cout << "Character Variable: " << charVar << endl;
    cout << "Boolean Variable: " << boolVar << endl;

    cout << "\nConstants:" << endl;
    cout << "PI (constant): " << PI << endl;
    cout << "MAX_STUDENTS (constant): " << MAX_STUDENTS << endl;

    cout << "\nOperations:" << endl;
    cout << "intVar + 20 = " << intSum << endl;
    cout << "floatVar * 2 = " << floatMul << endl;
    cout << "doubleVar / 2 = " << doubleDiv << endl;
    cout << "Character after increment: " << nextChar << endl;
    cout << "Is intVar > 5? " << (isGreater ? "True" : "False") << endl;

    return 0;
}
