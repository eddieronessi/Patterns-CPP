#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\n";
    cout << "\n-----Inverse Mirror Right Triangle Pattern-----\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= rows; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}