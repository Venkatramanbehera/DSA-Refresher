#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    while (n != 0)
    {
        // get the last digit
        int digit = n % 10;
        // number generate
        sum = sum + (digit * pow(2, i));
        i++;
        // remove the last digit
        n = n / 10;
    }
    cout << " DECIMAL NUMBER " << sum << endl;
    return 0;
}