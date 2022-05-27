#include<iostream>
using namespace std;

int main() {

    // int i = 5;
    // int& j = i;

    // cout << i << endl;
    // i++;
    // cout << j << endl;

    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;

    // int* arr = new int[n];

    int n;
    cin >> n;
    int** arr = new int* [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    return 0;
}