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

void printMatrixColumn(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

void rowSum(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << " Sum " << sum << endl;
    }
}

void colSum(int arr[3][3], int row, int col) {
    for (int i = 0; i < col; i++) {
        int sum = 0;
        for (int j = 0; j < row; j++) {
            sum += arr[i][j];
        }
        cout << " Sum " << sum << endl;
    }
}

int main() {
    int arr[3][3] = { 1 ,2 , 3 ,4,5,6,7,8,9 };
    printMatrix(arr, 3, 3);
    rowSum(arr, 3, 3);
    printMatrixColumn(arr, 3, 3);
    colSum(arr, 3, 3);
    return 0;
}