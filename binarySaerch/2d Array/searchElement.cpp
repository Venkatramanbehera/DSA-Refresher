#include<iostream>
using namespace std;

bool binarySearch(int arr[][3], int row, int col, int r, int target) {
    int start = 0;
    int end = col - 1;
    int mid = mid = start + (end - start) / 2;
    // cout << "MID" << mid << endl;
    // cout << "row" << row << endl;
    while (start <= end)
    {
        // cout << " Arr[row][mid]" << arr[row - 1][mid] << endl;
        if (arr[r][mid] == target) {
            cout << row << "  " << mid << endl;
            return true;
        }
        if (arr[r][mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = mid = start + (end - start) / 2;
    }
    return false;
}

bool binarySearchMatrix(int arr[][3], int row, int col, int target) {
    int start = 0, end = row - 1;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (arr[mid][0] == target)
            return true;
        if (arr[mid][col - 1] == target)
            return true;
        if (arr[mid][0] < target && target < arr[mid][col - 1]) {
            // cout << " checking row " << row << endl;
            // cout << " checking col " << col << endl;
            // cout << " checking end " << end << endl;
            bool ans = binarySearch(arr, row, col, mid, target);
            return ans;
        }
        if (arr[mid][0] < target) {
            start = mid + 1;
        }
        if (arr[mid][col - 1] > target) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main() {
    int arr[3][3] = { 1,5,9,14,20,21,30,34,43 };
    cout << binarySearchMatrix(arr, 3, 3, 2) << endl;
    return 0;
}