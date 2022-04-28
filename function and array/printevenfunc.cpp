#include <iostream>
using namespace std;

void printEven(int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n = 15;
    printEven(n);
    return 0;
}