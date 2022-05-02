#include<iostream>
using namespace std;

void printMatrix(int arr[4][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void spiralPrint(int arr[4][4], int row, int col) {
    int starting_col = 0, ending_col = col - 1, starting_row = 0, ending_row = row - 1;
    int count = 0;
    while (count < row * col) {
        for (int i = starting_col; i <= ending_col; i++) {
            cout << arr[starting_row][i] << " ";
            count++;
        }
        starting_row++;
        for (int i = starting_row; i <= ending_row; i++) {
            cout << arr[i][ending_col] << " ";
            count++;
        }
        ending_col--;
        for (int i = ending_col; i >= starting_col; i--) {
            cout << arr[ending_row][i] << " ";
            count++;
        }
        ending_row--;
        for (int i = ending_row; i >= starting_row; i--) {
            cout << arr[i][starting_col] << " ";
            count++;
        }
        starting_col++;
    }
    cout << endl;
}

int main() {
    int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
    spiralPrint(arr, 4, 4);
    cout << endl;
    printMatrix(arr, 4, 4);
    return 0;
}