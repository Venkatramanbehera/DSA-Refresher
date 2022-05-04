#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
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
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int arr[] = { 3,4,5,5,5,5,8,12 };
    cout << firstOccurance(arr, 7, 5) << endl;
    cout << lastOccurance(arr, 7, 5) << endl;
    cout << "Total number of Occurance " << lastOccurance(arr, 7, 5) - firstOccurance(arr, 7, 5) + 1 << endl;
    return 0;
}