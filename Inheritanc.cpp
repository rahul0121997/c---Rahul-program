#include <iostream>
using namespace std;

class A {
    int a;
public:
    void getA() {
        cout << "Enter A: ";
        cin >> a;
    }

    void putA() {
        cout << "\nA is: " << a;
    }
};

class B : public A {
    int b;
public:
    void getB() {
        cout << "\nEnter B: ";
        cin >> b;
    }

    void putB() {
        cout << "\nB is: " << b;
    }
};

class C : public B {
    int c;
public:
    void getC() {
        cout << "\nEnter C: ";
        cin >> c;
    }

    void putC() {
        cout << "\nC is: " << c;
    }
};

int main() {
    C s2;
    s2.getA();
    s2.getB();
    s2.getC();

    s2.putA();
    s2.putB();
    s2.putC();

    return 0;
}
