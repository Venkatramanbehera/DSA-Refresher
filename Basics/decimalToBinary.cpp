#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 4;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        // get the bit
        ans = (bit * pow(10, i)) + ans;
        // convert into decimal representation to view [number generate]
        n = n >> 1;
        // destry the bit
        i++;
    }
    cout << "Binary reps " << ans << endl;
    return 0;
}