#include<iostream>
using namespace std;

void printArray(int* arr, int s, int e) {
    for (int i = s; i < e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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

int findFirstOccurrence(int* arr, int s, int e, int k) {
    printArray(arr, s, e);
    if (s > e) {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k && k > arr[mid - 1]) {
        return mid;
    }
    if (k > arr[mid]) {
        return findFirstOccurrence(arr, (mid + 1), e, k);
    }
    else {
        return findFirstOccurrence(arr, s, (mid - 1), k);
    }
}

int findLastOccurrence(int* arr, int s, int e, int k) {
    if (s > e) {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k && arr[mid + 1] > k) {
        return mid;
    }
    if (k >= arr[mid]) {
        return findLastOccurrence(arr, (mid + 1), e, k);
    }
    else {
        return findLastOccurrence(arr, s, (mid - 1), k);
    }
}

int main() {
    int arr[] = { 3,4,5,5,5,5,8,12 };
    int size = 8;
    int k = 5;
    cout << findLastOccurrence(arr, 0, size, k);
    return 0;
}