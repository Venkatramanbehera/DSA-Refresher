#include<iostream>
using namespace std;

bool linearSearch(int* arr, int size, int k)
{
    if (size == 0) {
        return false;
    }
    if (arr[0] == k) {
        return true;
    }
    else {
        return linearSearch(arr + 1, size - 1, k);
    }
}

int main() {
    int arr[] = { 2,9,4,7,6 };
    int size = 5;
    int k = 11;
    cout << linearSearch(arr, size, k);
    return 0;
}