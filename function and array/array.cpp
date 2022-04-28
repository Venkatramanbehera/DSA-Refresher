#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[10];
    // int arr1[2] = {1, 2};
    // int arr3[] = {1, 2, 3, 4};
    // int arr4[5] = {1, 2};
    // int arr5[25] = {0};
    // cout << arr5[23] << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}