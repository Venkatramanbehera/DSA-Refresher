#include<iostream>
using namespace std;

int getSum(int* arr, int size) {
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return arr[0];
    }
    int ans = arr[0] + getSum(arr + 1, size - 1);
    return ans;
}

int main() {
    int arr[] = { 1,2,3,4 };
    int size = 4;
    cout << getSum(arr, 4) << endl;
    return 0;
}