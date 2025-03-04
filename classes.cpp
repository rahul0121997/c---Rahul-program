#include<iostream>
using namespace std;

class A{

int a;
    public:
    void getA(){
        cout<<"enter A: ";
        cin>>a;
    }

    void putA(){
        cout<<"\nA is:"<<a;
    }
};
class b:public A{
    int b;
    public :
    void getB(){
        cout<<"\nenter B :";
        cin>>b;
    }

    void putB(){
        cout<<"\nB is:"<<b;
    }
};

int main()
{
    b s1;
    s1.getA();
    s1.getB();
    s1.putA();
    s1.putB();
    return 0;
}