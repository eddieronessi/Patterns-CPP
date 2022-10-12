#include <iostream>
using namespace std;

void printPattern(int &n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (j == i || j == (n + 1 - i))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 6;
    cout << "\nCross Pattern\n\n";
    printPattern(n);
    return 0;
}

