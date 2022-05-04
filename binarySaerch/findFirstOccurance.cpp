#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = start + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main() {
    int arr[] = { 3, 4, 5, 5, 5, 5, 8, 12 };
    int size = 8;
    int target = 5;
    cout << "Index of first occurrence of 5 - ";
    cout << firstOccurrence(arr, size, target) << endl;
    return 0;
}