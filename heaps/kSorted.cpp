#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Info {
public:
    int data;
    int row;
    int col;

    Info() {

    }
    Info(int d, int r, int c) {
        data = d;
        row = r;
        col = c;
    }
};

class Cmp {
public:
    bool operator()(Info* a, Info* b) {
        return a->data > b->data;
    }
};

vector<int > mergeKsortedArrays(vector< vector<int> > arr, int k) {
    int n = arr[0].size();
    // create a min heap
    priority_queue<Info*, vector<Info*>, Cmp > minHeap;

    vector<int> ans;

    // step 1 -> insert 1st column
    for (int i = 0; i < k; i++) {
        int element = arr[i][0];
        Info* temp = new Info(element, i, 0);
        minHeap.push(temp);
    }

    while (minHeap.size() > 0) {
        Info* temp = minHeap.top();
        minHeap.pop();

        ans.push_back(temp->data);
        if (temp->col + 1 < n) {
            Info* pushElemnt = new Info(arr[temp->row][temp->col + 1], temp->row, temp->col + 1);
            minHeap.push(pushElemnt);
        }
    }
    return ans;
}

int main() {
    vector< vector<int> > arr(3, vector<int>(4, 0));

    arr[0][0] = 1;
    arr[0][1] = 3;
    arr[0][2] = 5;
    arr[0][3] = 7;

    arr[1][0] = 2;
    arr[1][1] = 4;
    arr[1][2] = 6;
    arr[1][3] = 8;

    arr[2][0] = 0;
    arr[2][1] = 9;
    arr[2][2] = 10;
    arr[2][3] = 11;

    vector<int > result = mergeKsortedArrays(arr, 3);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}