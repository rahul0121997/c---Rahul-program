#include <iostream>

using namespace std;

int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);

int main()
{
    int a, b;
    cout << "enter number A:";
    cin >> a;
    cout << "\nenter number B:";
    cin >> b;
    Add(a, b);
    Sub(a,b);
    Mul(a,b);
    Div(a,b);
    return 0;
}

int Add(int x, int y)
{
    cout << "the sum of two number is:" << x + y;
    return x + y;
}

int Sub(int x, int y)
{
    cout << "\nsubtraction of two number is:" << x - y;
    return x - y;
}

int Mul(int x, int y)
{
    cout << "\nmultiplication of two number is:" << x * y;
    return x * y;
}

int Div(int x,int y)
{
    cout<<"\nDivisoin of the number is:"<<x / y;
    return x / y;
}

