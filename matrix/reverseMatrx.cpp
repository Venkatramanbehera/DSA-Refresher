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

/*
void transposeMatrix(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
*/

void reverseMatrix(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        int start = 0;
        int end = col - 1;
        while (start < end) {
            swap(arr[i][start++], arr[i][end--]);
        }
    }
}

int main() {
    int arr[3][3] = { 1,4,7,2,5,8,3,6,9 };
    printMatrix(arr, 3, 3);
    reverseMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);
    return 0;
}