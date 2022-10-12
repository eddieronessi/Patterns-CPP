#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\n";
    cout << "\n-----Mirrored Right Triangle Pattern-----\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}