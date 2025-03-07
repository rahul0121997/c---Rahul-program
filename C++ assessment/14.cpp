#include <iostream>
using namespace std;

int globalVar = 10;

// Function to demonstrate local variable
void localVariableExample() {
    int localVar = 20;  // Local variable
    cout << "Inside localVariableExample function:" << endl;
    cout << "Local variable value: " << localVar << endl;
    cout << "Global variable value: " << globalVar << endl; // Access global variable inside function
}

// Function to demonstrate global variable modification
void modifyGlobalVariable() {
    globalVar = 50;  // Modifying global variable
    cout << "Inside modifyGlobalVariable function:" << endl;
    cout << "Global variable after modification: " << globalVar << endl;
}

int main() {
    cout << "Inside main function:" << endl;
    cout << "Global variable value: " << globalVar << endl;  // Access global variable in main
    
    localVariableExample();  // Calling function to show local variable usage
    
    modifyGlobalVariable();  // Modify and print global variable
    
    // After modifying the global variable, check the value in the main function
    cout << "\nBack in main function after modification:" << endl;
    cout << "Global variable value: " << globalVar << endl;  // Modified global variable value
    
    return 0;
}
