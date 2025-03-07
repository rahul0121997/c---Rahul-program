#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks: ";
    cin>>marks;
    if(marks > 90)
    {
        cout<<"\nGread A";
    }
    else if(marks > 70 && marks <= 90)
    {
        cout<<"\nGreade B";
    }
    else if(marks > 50 && marks <= 70)
    {
        cout<<"\nGreade c";
    }
    else
    {
        cout<<"\nGreade D";
    }
    return 0;
}