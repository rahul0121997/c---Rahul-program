#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    
public:
    Box(double l, double w) : length(l), width(w) {}

    // Declaring a friend function to access private members
    friend double calculateArea(Box b);  
};

// Definition of the friend function outside the class
double calculateArea(Box b) {
    return b.length * b.width;  // Accessing private members directly
}

int main() {
    Box box1(5.0, 4.0);  // Creating an object of Box class
    cout << "Area of the box: " << calculateArea(box1) << endl;  // Calling the friend function
    return 0;
}
