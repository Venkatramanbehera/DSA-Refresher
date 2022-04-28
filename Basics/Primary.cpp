#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = true;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Not Prime Number" << endl;
    }
    else
    {
        cout << "Prime number" << endl;
    }
    return 0;
}