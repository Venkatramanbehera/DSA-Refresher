#include <iostream>
using namespace std;

void findCommonElement(int arr1[], int x, int arr2[], int y, int arr3[], int z)
{
    int i = 0, j = 0, k = 0;
    int prev1, prev2, prev3;
    prev1 = prev2 = prev3 = INT_MIN;
    // we are using prev because we have to track weather that element is
    // duplicate or not
    while (i < x && j < y && k < z)
    {
        while (arr1[i] == prev1 && i < x)
        {
            i++;
        }
        while (arr2[j] == prev2 && j < y)
        {
            j++;
        }
        while (arr3[k] == prev3 && k < x)
        {
            k++;
        }
        if (arr1[i] == arr2[j] && arr1[i] == arr2[k])
        {
            cout << arr1[i] << " ";
            prev1 = arr1[i];
            prev2 = arr2[j];
            prev3 = arr3[k];
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            prev1 = arr1[i];
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            prev2 = arr2[j];
            j++;
        }
        else
        {
            prev3 = arr3[k];
            k++;
        }
    }
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80, 100};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 100, 120};
    findCommonElement(arr1, 7, arr2, 5, arr3, 9);
    return 0;
}