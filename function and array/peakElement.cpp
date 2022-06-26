#include<iostream>
using namespace std;

int peakElement(int arr[], int n) {
    int num = 0;
    int numIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > num) {
            num = arr[i];
            numIndex = i;
        }
    }
    return numIndex;
}

int main() {
    int arr[] = { 5 ,15, 14, 1, 1, 13, 11, 14, 2, 15, 12 };
    int size = 11;
    cout << peakElement(arr, size) << endl;
    return 0;
}