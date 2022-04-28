#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        // for space
        for (int space = 1; space <= (n - row); space++)
        {
            cout << "- ";
        }
        if (row == 1)
        {
            cout << "* ";
        }
        else
        {
            cout << "* ";
            for (int star = 1; star <= ((row - 1) + (row - 2)); star++)
            {
                cout << "- ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
    }
    return 0;
}