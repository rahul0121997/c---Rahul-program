#include<iostream>
using namespace std;


int fibo(int n);
int main()
{
    int n;
    cout<<"\n enter N :";
    cin>>n;
    cout<<"\n fibonacci series :";
    for(int i = 1;i < n; i++)
    {
        cout<<fibo(i) <<"";
    }


    return 0;
}

int fibo(int n)
{
    int num;
    if(n <=1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}