#include<iostream>
#include<vector>
using namespace std;

vector<int> constructLowerArray(int* arr, int n) {
    // code here
    vector<int> result;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                cout << i << j << " Count check " << arr[i] << " ARR[J] " << arr[j] << endl;
                count++;
            }
        }
        cout << " Count " << count << endl;
        result.push_back(count);
    }
    return result;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    vector<int> res = constructLowerArray(arr, 7);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}