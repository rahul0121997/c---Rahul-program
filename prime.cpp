#include<iostream>
using namespace std;

int isprime(int);
int main()
{
    int num;
    cout<<"\nenter number:\n";
    cin>>num;
    if(isprime(num))
    {
        cout<<num<<"\nnumber is prime.";
    }
    else{
        cout<<"\nnumber is not prime.";
    }
    return 0;
}

int isprime(int num)
{
    if (num <= 1 )
    {
        return 0;
    }
    for(int i = 2;i*i <= num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}