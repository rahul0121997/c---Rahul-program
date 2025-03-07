#include <iostream>

using namespace std;

int main()
{
    int row, col, sum = 0;
    cout << "enter the number of row and col: \n";
    cin >> row >> col;
    int a[row][col];
    cout << "\nenter the elements of the matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    cout << "\ntotal sum of matrix is : " << sum;
    cout << "\nthe matrix elements is :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}