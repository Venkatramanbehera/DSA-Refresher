#include<iostream>
using namespace std;

int findPeakElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
}

int main() {
    int arr[] = { 0, 10, 5, 2 };
    cout << findPeakElement(arr, 4) << endl;
    return 0;
}