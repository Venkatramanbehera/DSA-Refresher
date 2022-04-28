#include <iostream>
using namespace std;

// 1 2 3 4 5 6 --> 6 2 4 3 5 1
void swapAlternatives(int arr[], int size)
{
    int start = 0;
    int end = size;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 2;
        end -= 2;
    }
}

// 1 2 3 4 5 6 --> 2 1 4 3 6 5
void swapAlter(int arr[], int size)
{
    int i = 0;
    while (i + 1 < size)
    {
        swap(arr[i], arr[i + 1]);
        i = i + 2;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 5);
    swapAlter(arr, 5);
    printArray(arr, 5);
    return 0;
}