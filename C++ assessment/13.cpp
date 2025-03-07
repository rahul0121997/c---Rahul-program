
#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 && n == 1) {
        return 1;  // Base case: Factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int num;

    // Ask the user to input a number
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Check if the input is a non-negative integer
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the recursive function to calculate factorial
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}

          // fibonacci series......
// #include <iostream>
// using namespace std;

// int fibo(int n);
// int main()
// {
//     int n;
//     cout << "\nenter number :";
//     cin >> n;
//     cout<<"\nfibonacci series:";

//     for(int i = 0;i < n; i++)
//     {
//         cout<<"\n"<<fibo(i);
//     }
//     return 0;
// }

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(n - 1) + fibo(n - 2);
//     }
// }
