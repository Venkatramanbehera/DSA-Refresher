#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "  Enter a number  " << endl;
    cin >> n;
    int sum = 0, i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << " Sum is " << sum << endl;
    return 0;
}