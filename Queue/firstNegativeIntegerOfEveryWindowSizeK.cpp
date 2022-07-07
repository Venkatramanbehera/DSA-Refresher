#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> solveIterUsingQueue(int arr[], int n, int k) {
    vector<int> result;
    queue<int> q;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q.push(i);
        }
    }
    if (q.size() > 0) {
        result.push_back(arr[q.front()]);
    }
    else {
        result.push_back(0);
    }

    for (int i = k; i < n; i++) {
        if (!q.empty() && i - q.front() >= k) {
            q.pop();
        }
        if (arr[i] < 0) {
            q.push(i);
        }
        if (q.empty()) {
            result.push_back(0);
        }
        else {
            result.push_back(arr[q.front()]);
        }
    }
    return result;
}

vector<int> solveIter(int arr[], int n, int k) {
    vector<int> result;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        int j = i;
        for (; j < (i + k); j++) {
            ans = min(ans, arr[j]);
        }
        result.push_back(ans);
    }
    return result;
}

int main() {
    int arr[] = { 12, -1, -7, 8, -15, 30, 16, 28 };
    int n = 8;
    int k = 3;
    vector<int> result = solveIterUsingQueue(arr, n, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}