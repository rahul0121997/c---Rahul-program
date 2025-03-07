#include<iostream>

using namespace std;

class Rectangle
{
    int length, width; // Only length and width are needed for area calculation

public:
    // Constructor to initialize length and width
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Method to calculate the area of the rectangle
    int areaOfRectangle()
    {
        return length * width; // Calculate area
    }

    // Method to display the calculated area
    void display()
    {
        int area = areaOfRectangle(); // Get the area from areaOfRectangle
        cout << "\nArea of Rectangle is: " << area << endl;
    }
};

int main()
{
    // Create an object of Rectangle with dimensions 3 and 5
    Rectangle r1(3, 5);
    
    // Display the calculated area
    r1.display();

    return 0;
}
