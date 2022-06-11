#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    // finding pivot index
    int pivotIndex = count + s;
    swap(arr[s], arr[pivotIndex]);

    // handling left and right
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex) {
        // left side array check
        while (arr[i] < pivot) {
            i++;
        }
        // right side array check
        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }

    int pIndex = partition(arr, s, e);
    // cout << pIndex << endl;
    quickSort(arr, s, pIndex - 1);
    quickSort(arr, pIndex + 1, e);
}

int main() {
    int arr[] = { 12, 11, 13, 5,6,7 };
    int size = 6;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}