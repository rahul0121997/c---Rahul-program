#include<iostream>

using namespace std;

class student
{
    int rno;
    char sname[50];
    double per;
public:
    void getdata()
    {
        cout <<"\nenter roll number:";
        cin>>rno;
        cout<<"\nenter student name:";
        cin>>sname;
        cout<<"\nenter student percentage:";
        cin>>per;
    }

    void putdata()
    {
        cout<<"\n Roll number :"<< rno << endl;
        cout<<"\n student name :"<< sname << endl;
        cout<<"\n student percantage:"<< per << endl;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}