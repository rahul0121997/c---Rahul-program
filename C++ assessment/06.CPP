// TYPE CONVERSION
#include<iostream>
using namespace std;

int main()
{
    int x = 34;
    double y = 52.3;
    // implicit conversion
    // double result = x + y;
    cout<<" sum of two number using implicit type conversion is :"<<x + y;
    cout<<"\nexplicit type conversion :"<<x+int(y);
    return 0;
}