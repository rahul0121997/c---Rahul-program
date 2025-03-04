#include<iostream>
using namespace std;

class box
{
    public:
    double width,height,depth;
    box()
    {
        cout<<"default constructor:\n";
        width = 4;
        height = 5;
        depth = 6;
    }
    box(double w,double h,double d)
    {
        cout<<"paramerized constructor:\n";
        width = w;
        height = h;
        depth = d;
    }

    box(const box &b)
    {
         width = b.width;
         height = b.height;
         depth = b.depth;
         cout<<"copy constructor";
    }

     void volume()
    {
        cout<<"\nVolume is:"<<width*height*depth<<endl;
    }

};


int main()
{
    box b1;
    box b2(3,4,5);
    box b3(b1);
    b1.volume();
    b2.volume();
    b3.volume();
    return 0;
}