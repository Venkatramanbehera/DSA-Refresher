#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int row = 1; row <= n; row++)
    {
        // for prev space
        for (int i = 1; i <= n - row; i++)
        {
            cout << " ";
        }
        if (row == 1 || row == n)
        {
            for (int k = 1; k <= row; k++)
            {
                cout << " *";
            }
        }
        else
        {
            cout << "*";
            for (int j = 1; j <= row - 1; j++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}