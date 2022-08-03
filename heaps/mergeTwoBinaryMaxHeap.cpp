#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& result, int size, int index) {
    int largest = index;
    int left = index * 2 + 1;
    int right = index * 2 + 2;
    if (left < size && result[left] > result[largest]) {
        largest = left;
    }
    if (right < size && result[right] > result[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(result[largest], result[index]);
        heapify(result, size, largest);
    }
}

vector<int> mergeHeaps(vector<int>& a, vector<int>& b, int n, int m) {
    vector<int> result;
    for (auto i : a) {
        result.push_back(i);
    }
    for (auto i : b) {
        result.push_back(i);
    }
    int size = m + n;
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(result, size, i);
    }
    return result;
}

int main() {
    vector<int> a;
    a.push_back(10);
    a.push_back(5);
    a.push_back(6);
    a.push_back(2);
    vector<int> b;
    b.push_back(12);
    b.push_back(7);
    b.push_back(9);
    vector<int> result = mergeHeaps(a, b, a.size(), b.size());
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}