#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, columns;
    cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
    cin >> rows;
    cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
    cin >> columns;
    cout << "\nHollow Rectangle Pattern\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}