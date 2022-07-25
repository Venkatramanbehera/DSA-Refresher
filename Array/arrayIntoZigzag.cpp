#include<iostream>
using namespace std;

void zigZag(int arr[], int n) {
    // code here
    cout << " HI" << endl;
    int i = 0;
    int j = i + 1;
    while (j != n - 1) {
        if (i & 1) {
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        else {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        i++;
        j++;
    }
}

int main() {
    int arr[] = { 4, 3, 7, 8, 6, 2, 1 };
    int n = 7;
    zigZag(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}