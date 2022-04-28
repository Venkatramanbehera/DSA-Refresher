#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // for rows
    for (int row = 1; row <= n; row++)
    {
        // for col
        for (int j = 1; j <= n - row; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= row; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}