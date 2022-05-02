#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void firstNonRepeatingElement(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                // cout << arr[i] << endl;
                cout << arr[i] << " " << arr[j] << " " << endl;
                break;
            }
            else {
                cout << "non" << arr[i] << endl;
            }
        }
    }
    // return -1;
}

void checkNonRepeatingElement(int arr[], int size) {

    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < size; i++) {
        // cout << mp[arr[i]] << " ";
        if (mp[arr[i]] == 1) {
            cout << arr[i] << endl;
        }
    }

}

int main() {
    int arr[] = { -1, 2, -1, 3, 2 };
    checkNonRepeatingElement(arr, 5);
    return 0;
}