#include <iostream>
using namespace std;

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

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    findTriplate(arr, 5, 22);
    return 0;
}