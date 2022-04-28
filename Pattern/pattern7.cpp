#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // for rows
    for (int row = 1; row <= n; row++)
    {
        // for col space
        for (int j = 1; j <= row - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - row + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}