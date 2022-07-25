#include<iostream>
#include<vector>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k) {
    // code here
    for (int i = 0; i < n; i += k) {
        int start = i;
        int end;
        if (i + k > n) {
            end = n - 1;
        }
        else {
            end = i + k - 1;
        }
        while (start < end) {
            int temp = arr[start];
            cout << temp << endl;
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    vector<long long> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int k = 3;
    reverseInGroups(arr, arr.size(), k);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}