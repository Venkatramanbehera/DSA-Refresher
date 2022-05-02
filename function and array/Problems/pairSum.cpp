#include <iostream>
#include <algorithm>
using namespace std;

// O(nlogn)
bool validPair(int arr[], int sum, int size)
{
    for (int i = 0; i <= size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                return true;
            }
        }
    }
    return false;
}

// O(n)
bool optimizeValidpair(int arr[], int target, int size)
{
    int i = 0;
    int j = size;
    sort(arr, arr + size);
    while (i < size && j >= 0)
    {
        if (arr[i] + arr[j] == target)
        {
            return true;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
    }
    return false;
}

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int sum = -2;
    // cout << validPair(arr, sum, 4) << endl;
    cout << optimizeValidpair(arr, sum, 5);
    return 0;
}