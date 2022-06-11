#include<iostream>
using namespace std;

void mergeArray(int* arr1, int* arr2, int m1, int m2, int* arr) {
    int startArr = 0;
    int startArr2 = 0;
    int arrIndex = 0;
    while (startArr < m1 && startArr2 < m2) {
        if (arr1[startArr] < arr2[startArr2]) {
            arr[arrIndex++] = arr1[startArr];
            startArr++;
        }
        else {
            arr[arrIndex++] = arr2[startArr2];
            startArr2++;
        }
    }
    while (startArr < m1) {
        arr[arrIndex++] = arr1[startArr++];
    }
    while (startArr2 < m2) {
        arr[arrIndex++] = arr2[startArr2++];
    }
}

int main() {
    int arr1[] = { 3,5,7,9 };
    int arr2[] = { 2,4,6 };
    int arr1length = 4;
    int arr2length = 3;
    int arr[arr1length + arr2length];
    mergeArray(arr1, arr2, arr1length, arr2length, arr);
    for (int i = 0; i < (arr1length + arr2length); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}