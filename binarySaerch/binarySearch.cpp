#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    int mid = (start + end) / 2;
    // mid = start/2 + end/2
    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = start + 1;
        }
        mid = (start + end) / 2;
    }
    // mid = start/2 + end/2
    return -1;
}

int main() {
    int arr[] = { 2, 4, 7, 9, 12, 56, 89 };
    int n = 7;
    int target = 12;
    cout << binarySearch(arr, n, target) << endl;
    cout << binary_search(arr, arr + 7, target) << endl;
    return 0;
}