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

void unionArray(int arr1[], int size_arr1, int arr2[], int size_arr2)
{
    int i = 0, j = 0;
    while (i <= size_arr1 && j <= size_arr2)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    while (i <= size_arr1)
    {
        cout << arr1[i++] << " ";
    }
    while (j <= size_arr2)
    {
        cout << arr2[j++] << " ";
    }
}

void intersection(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i <= size1; i++)
    {
        for (int j = 0; j <= size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
    }
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    unionArray(arr1, 4, arr2, 3);
    cout << " Intersection " << endl;
    intersection(arr1, 4, arr2, 3);
    return 0;
}