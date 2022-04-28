#include <iostream>
using namespace std;

// number to digit conversion
int main()
{
    int n = 137234;

    while (n != 0)
    {
        int digit = n % 10;
        cout << " Digit " << digit << endl;
        n = n / 10;
    }

    cout << " Done " << endl;
    return 0;
}