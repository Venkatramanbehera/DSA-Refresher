#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    cout << "START" << start << endl;
    cout << "end" << end << endl;
    int mid = start + (end - start) / 2;
    while (start < end) {
        if (arr[mid] == target) {
            return arr[mid];
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int pivot(int arr[], int size) {
    int start = 0;
    int end = size;
    int mid = start + (end - start) / 2;
    while (start < end) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main() {
    int arr[] = { 4,5,6,7,0,1,2 };
    int target = 1;
    int res = pivot(arr, 6);
    cout << "RES" << res << endl;
    if (target >= arr[res] && target <= arr[6 - 1]) {
        cout << binarySearch(arr, res, 6, target);
    }
    else {
        cout << binarySearch(arr, 0, res, target);
    }
    return 0;
}