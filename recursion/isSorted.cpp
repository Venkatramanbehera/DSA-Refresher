#include<iostream>
using namespace std;

bool isSorted(int* arr, int size) {
    if (size == 0 || size == 1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    }
    else {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main() {
    int arr[] = { 10,4,6,9,11,13 };
    int size = 6;
    bool ans = isSorted(arr, size);
    cout << " Is " << ans << endl;
    return 0;
}