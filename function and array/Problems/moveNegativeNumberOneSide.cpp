#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveNegativeNumber(int arr[], int size)
{
    int starting = 0;
    int ending = 0;
    while (ending <= size)
    {
        if (arr[ending] <= 0)
        {
            int temp = arr[starting];
            arr[starting] = arr[ending];
            arr[ending] = temp;
            starting++;
            ending++;
        }
        else
        {
            ending++;
        }
    }
}
// time complexity - O(size)
// space complexity - O(1)
int main()
{
    int arr[] = {2, 4, -10, 13, -7, -60, 52, 8, -19};
    printArray(arr, 8);
    moveNegativeNumber(arr, 8);
    printArray(arr, 8);
    return 0;
}