#include <iostream>
using namespace std;

int factorial(int num)
{
    int res = 1;
    for (int i = num; i >= 1; i--)
    {
        res = res * i;
    }
    return res;
}

void printName(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Chiku" << endl;
    }
}

int main()
{
    int num = 5;
    cout << factorial(num) << endl;
    printName(num);
    return 0;
}