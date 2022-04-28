#include <iostream>
using namespace std;

bool validPair(int arr[], int sum, int size)
{
    for (int i = 0; i <= size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int sum = -2;
    cout << validPair(arr, sum, 4) << endl;
    return 0;
}