#include <iostream>
#include <algorithm>
using namespace std;

// O(n^3)
void findTriplate(int arr[], int size, int sum)
{
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            for (int k = 0; k <= size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << endl;
                    return;
                }
            }
        }
    }
}

// good approach O(n^2)
bool triplate(int arr[], int target, int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        int value = arr[i];
        int j = i + 1, k = size;
        while (j < k)
        {
            if (arr[j] + arr[k] + value == target)
            {
                cout << value << " " << arr[j] << " " << arr[k] << " ";
                return true;
            }
            else if (value + arr[j] + arr[k] < target)
            {
                j++;
            }
            else if (value + arr[j] + arr[k] > target)
            {
                k--;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    // findTriplate(arr, 5, 22);
    cout << triplate(arr, sum, 5) << endl;
    return 0;
}