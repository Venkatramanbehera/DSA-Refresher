#include <iostream>
#include <limits.h>
using namespace std;

void maximumSumContigiousSubarray(int arr[], int size)
{
    int ans = INT_MIN;
    int sum = 0;
    int start, end;
    start = end = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (ans < max(ans, sum))
        {
            ans = max(ans, sum);
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            start = end = i;
        }
    }
    cout << ans << "start index" << endl;
    for (int i = start + 1; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    maximumSumContigiousSubarray(arr, 8);
    return 0;
}