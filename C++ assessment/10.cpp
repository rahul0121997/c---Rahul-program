#include<iostream>
 using namespace std;

 int main()
 {
    int n;
    cout<<"enter a number for multiplication table :";
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<"\n"<<n <<"x"<<i<<"="<<n*i;
    }
    
    return 0;
 }