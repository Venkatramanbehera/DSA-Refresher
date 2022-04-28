#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // for rows
    for (int row = 1; row <= n; row++)
    {
        // for col
        for (int col = 1; col <= n; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}