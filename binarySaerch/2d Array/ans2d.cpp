#include<iostream>
using namespace std;

bool search(int arr[][3], int n, int m, int target) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (arr[mid][0] == target) {
            return true;
        }
        if (arr[mid][m - 1] == target) {
            return true;
        }
        if (target > arr[mid][0] && target < arr[mid][m - 1]) {
            bool ans = binarySearch(arr, n, m, target);
            return ans;
        }
        if (target < arr[mid][0]) {
            e = mid - 1;
        }
        if (target > arr[mid][m - 1]) {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main() {
    int arr[3][3] = { 1,5,9,14,20,21,30,34,43 };
    int n = 3, m = 3;
    int target = 23;
    cout << search(arr, n, m, target);
    return 0;
}