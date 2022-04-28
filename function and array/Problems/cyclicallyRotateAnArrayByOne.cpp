#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void cyclicallyRotateAnArrayByOne(int arr[], int size)
{
    int first = arr[0];
    int i = 1;
    while (i <= size)
    {
        arr[i - 1] = arr[i];
        i++;
    }
    arr[size] = first;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // 2 3 4 5 1
    cyclicallyRotateAnArrayByOne(arr, 4);
    printArray(arr, 4);
    return 0;
}