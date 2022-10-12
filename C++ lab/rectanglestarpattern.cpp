#include <iostream>
using namespace std;

int main()
{
    int i, j, rows, columns;
    cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
    cin >> rows;
    cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
    cin >> columns;
    cout << "\n-----Rectangle Pattern-----\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cout << "*  ";
        }
        cout << "\n";
    }
    return 0;
}