#include <iostream>
using namespace std;

void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
}

int main()
{
    int n = 6;
    square(n);
    return 0;
}