#include <iostream>
using namespace std;

int main(){

cout << "Simple Triangle Pattern" << endl;
    int row, star = 1, n = 5, col, M;
    for (row = 0; row <= n; row++)
    {
        for (col = 5; col >= row; col--)
        {
            cout << "  ";
        }
        cout << " *";
        for (M = 0; M <= row - 1; M++)
        {
            if (M / 5 == 0)
            {
                cout << " @";
            }
            else
            {
                cout << " *";
            }
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}
