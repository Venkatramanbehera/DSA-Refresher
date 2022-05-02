#include<iostream>
using namespace std;

void printMatrix(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main() {
    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
    printMatrix(arr, 3, 3);
    transposeMatrix(arr, 3, 3);
    cout << " After transpose " << endl;
    printMatrix(arr, 3, 3);
    return 0;
}