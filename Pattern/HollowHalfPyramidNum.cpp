#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // for rows
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            cout << 1;
            for (int k = 1; k <= i - 1; k++)
            {
                cout << "  ";
            }
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}