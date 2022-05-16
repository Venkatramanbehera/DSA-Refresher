#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return false;
}

int main() {
    int arr[] = { 10,2,5,3 };
    int size = 4;
    cout << check(arr, size);
    return 0;
}