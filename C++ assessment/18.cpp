#include <iostream>

using namespace std;

class calculator
{
public:
    void Add(int x, int y)
    {
        cout << "the sum of two number is :" << x + y;
    }
    void Sub(int x, int y)
    {
        cout << "\nthe subtraction of two number is :" << x - y;
    }
    void mul(int x, int y)
    {
        cout << "\nthe multiplication of two number is :" << x * y;
    }
    void div(int x, int y)
    {
        cout << "\nthe division of two number is :" << x / y;
    }
};
int main()
{
    calculator c1;
    c1.Add(15,55);
    c1.Sub(4,6);
    c1.mul(4,6);
    c1.div(45,15);
    return 0;
}