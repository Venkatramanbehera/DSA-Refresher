#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findDuplicate(int arr[], int n) {
    unordered_map<int, int> dup;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (!dup[arr[i]]) {
            dup[arr[i]] = 1;
        }
        else {
            dup[arr[i]]++;
        }
    }
    for (auto i : dup) {
        // cout << i.first << " -> " << i.second << endl;
        if (i.second > 1) {
            ans.push_back(i.first);
        }
    }
    if (ans.size() == 0) {
        ans.push_back(-1);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int arr[] = { 2,3,1,2,3 };
    int N = 5;
    vector<int> res = findDuplicate(arr, N);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}