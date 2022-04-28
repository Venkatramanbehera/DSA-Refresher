#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    // for rows
    for (int row = 1; row <= n; row++)
    {
        if (row == 1 || row == n)
        {
            for (int i = row; i <= n; i++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 1; j <= n - row - 1; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}