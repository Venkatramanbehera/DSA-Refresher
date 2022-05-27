#include<iostream>
using namespace std;

bool binarySearch(int* arr, int s, int e, int k) {
    if (s > e) {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k) {
        return true;
    }
    if (arr[mid] < k) {
        return binarySearch(arr, mid + 1, e, k);
    }
    else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[] = { 2, 7 , 11, 14, 78 };
    int size = 5;
    int k = 14;
    cout << binarySearch(arr, 0, size, k);
    return 0;
}