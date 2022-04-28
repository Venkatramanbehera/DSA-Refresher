#include <iostream>
using namespace std;

// O(n^2) - time complexity
// O(1) - space complexity
int findDuplicate(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return 0;
}

// int findDuplicateNum(int arr[], int size)
// {
//     sort(arr, arr + n);
//     for (int i = 0; i <= size; i++)
//     {
//         for (int j = 0; j <= size; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return 0;
// }

int main()
{
    int arr[] = {1, 3, 4, 2, 2};
    cout << findDuplicate(arr, 4) << endl;
    return 0;
}