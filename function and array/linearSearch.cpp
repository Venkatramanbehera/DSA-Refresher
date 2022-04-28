#include <iostream>
using namespace std;

bool search(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[100];
    cout << "Enter the size of array";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[5] = {1, 8, 3, 4, 7};
    cout << search(arr, 5, 2) << endl;
    return 0;
}