#include <iostream>
using namespace std;

/*
1
2*2
3*3*3
4*4*4*4
3*3*3
2*2
1
*/

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << i << " ";
        }
        else
        {
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if ((j & 1) == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        if (i == 1)
        {
            cout << i << " ";
        }
        else
        {
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if ((j & 1) == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}