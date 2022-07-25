#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        // cout << arr[largest] << endl;
        swap(arr[largest], arr[i]);
        cout << " Largest " << largest << endl;
        heapify(arr, n, largest);
    }
    cout << " Last " << arr[largest] << endl;
}

void heapSort(int arr[], int n) {
    // step 1 - Build heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = 6;
    heapSort(arr, n);
    return 0;
}