// tarnspose  matrix is a matrix in which row and column should be equal in number
// and after cange in a transpose matrix row  convert in column and column in a row of arr is not equal!!
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    cout << "enter 6 values";
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cin >> arr[r][c];
        }
    }
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << arr[r][c] << "\t";
        }
    }
    cout << endl;
    cout << "transpose";
    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 2; r++)
        {
            cout << arr[r][c] << "\t";
        }
    } 
}