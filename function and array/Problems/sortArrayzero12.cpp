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

void sortArray(int arr[], int size)
{
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }
    // printArray(arr, 6);
    // cout << " 0->" << count_0 << " 1->" << count_1 << " 2->" << count_2;
    int counter = 0;
    while (count_0 >= 1)
    {
        arr[counter] = 0;
        counter++;
        count_0--;
    }
    while (count_1 >= 1)
    {
        arr[counter] = 1;
        counter++;
        count_1--;
    }
    while (count_2 >= 1)
    {
        arr[counter] = 2;
        counter++;
        count_2--;
    }
}
// Time complexity - O(size)+O(count_0)+O(count_1)+O(count_2) --> O(size)
// Space complexity - O(1)
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    cout << "Before" << endl;
    printArray(arr, 11);
    sortArray(arr, 11);
    cout << "After" << endl;
    printArray(arr, 11);
    return 0;
}