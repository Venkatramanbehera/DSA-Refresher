#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixSum(int* arr, int n) {
    int sum = 0;
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (i) {
            result.push_back(arr[i] + result[i - 1]);
        }
        else {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int arr[] = { 10, 20, 10, 5, 15 };
    int n = 5;
    vector<int> result = prefixSum(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}