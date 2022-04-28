#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        int k = row;
        for (int num = 1; num <= row; num++)
        {
            cout << k++ << " ";
        }
        if (row != 1)
        {
            int k = row;
            for (int num2 = (row - 1) * 2; num2 >= row; num2--)
            {
                cout << num2 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}