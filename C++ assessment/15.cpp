#include <iostream>

using namespace std;

int main()
{
    int row, sum = 0;
    cout << "enter number of row :";
    cin >> row;
    int a[row];
    cout << "\nenter the elements of array\n";
    for (int i = 0; i <= row; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << "\ntotal sum of the elements is:" << sum;
    cout << "\nthe array is ";
    for (int i = 0; i <= row; i++)
    {
        cout << " " << a[i];
    }
    return 0;
}