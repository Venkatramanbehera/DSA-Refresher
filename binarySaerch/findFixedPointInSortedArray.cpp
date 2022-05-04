#include<iostream>
using namespace std;

bool isFixedPoint(int arr[], int n) {
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (arr[mid] == mid) {
            return true;
        }
        else if (arr[mid] < mid) {
            // move to right side
            start = mid + 1;
        }
        else {
            // move to left side
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main() {
    int arr[] = { -10, -5, 0, 3, 7 };
    int size = 4;
    cout << isFixedPoint(arr, size);
    return 0;
}