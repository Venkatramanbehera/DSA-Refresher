#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = (s + e) / 2;
    int leftLength = mid - s + 1;
    int rightLength = e - mid;
    int index = s;

    // creating array
    int* leftArray = new int[leftLength];
    int* rightArray = new int[rightLength];

    // copy the array
    for (int i = 0; i < leftLength; i++) {
        leftArray[i] = arr[index];
        index++;
    }
    index = mid + 1;
    for (int i = 0; i < rightLength; i++) {
        rightArray[i] = arr[index];
        index++;
    }
    // merge the two copy array
    int leftStart = 0, rightStart = 0;
    index = s;
    while (leftStart < leftLength && rightStart < rightLength) {
        if (leftArray[leftStart] <= rightArray[rightStart]) {
            arr[index] = leftArray[leftStart];
            leftStart++;
            index++;
        }
        else {
            arr[index] = rightArray[rightStart];
            rightStart++;
            index++;
        }
    }
    // left over leftArray
    while (leftStart < leftLength) {
        arr[index] = leftArray[leftStart];
        leftStart++;
        index++;
    }
    // left over rightArray
    while (rightStart < rightLength) {
        arr[index] = rightArray[rightStart];
        rightStart++;
        index++;
    }
}

void mergeSort(int arr[], int s, int e) {
    // base case
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;
    // left array 
    mergeSort(arr, s, mid);
    // rigth array 
    mergeSort(arr, mid + 1, e);
    // merge both array
    merge(arr, s, e);
}

int main() {
    int arr[] = { 12, 11, 13, 5,6,7 };
    int size = 6;
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}