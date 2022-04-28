#include <iostream>
#include <limits.h>
using namespace std;

int minmum(int arr[], int size)
{
    int minm = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minm)
        {
            minm = arr[i];
        }
    }
    return minm;
}

int max(int arr[], int size)
{
    int maxm = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxm)
        {
            maxm = arr[i];
        }
    }
    return maxm;
}

int maxFromArray(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minFromArray(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(arr[i], mini);
    }
    return mini;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {23, 4, 87, 1, 45};
    printArray(arr, 5);
    cout << "Maximum number is - " << max(arr, 5) << endl;
    cout << "Maximum number is - " << maxFromArray(arr, 5) << endl;
    cout << "Maximum number is - " << minmum(arr, 5) << endl;
    cout << "Maximum number is - " << minFromArray(arr, 5) << endl;
    return 0;
}