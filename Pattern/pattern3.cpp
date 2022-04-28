#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // for rows
    for (int row = 1; row <= n; row++)
    {
        // for col
        for (int col = 1; col <= (n - row) + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    while (n != 0)
    {
        int j = n;
        while (j != 0)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        n--;
    }
    return 0;
}