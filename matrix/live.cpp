#include<iostream>
using namespace std;

void transpose(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

bool isPresent(int arr[3][3], int target, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                // cout << "Present";
                return true;
            }
        }
    }
    return false;
}

void sum(int arr[3][3], int row, int col) {
    for (int i = 0; i < col; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            // cout << arr[i][j] << " ";
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
        // cout << endl;
    }
}

int main() {
    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
    // arr[3][3] = {1} , first element only 1 ;
    // arr[3][3] = {1,2,3,4,5,6,7,8,9}
    // arr[2][2] = { {1,2}, {3,4}}
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << isPresent(arr, 5, 3, 3) << endl;;
    transpose(arr, 3, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}