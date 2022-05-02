#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// brutforce approach
void printFirstRepeat(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
                return;
            }
        }
    }
}

void printFirstRepeatingOptimize(int arr[], int size) {
    int min = -1;
    set<int> s;
    for (int i = size - 1; i >= 0; i--)
    {
        if (s.find(arr[i]) != s.end()) {
            min = i;
        }
        else {
            s.insert(arr[i]);
        }
    }
    if (min != -1) {
        cout << " first repeating element" << arr[min] << endl;
    }
    else {
        cout << "No repeating element is present " << endl;
    }
}

int main()
{
    int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
    printFirstRepeatingOptimize(arr, 7);
    return 0;
}