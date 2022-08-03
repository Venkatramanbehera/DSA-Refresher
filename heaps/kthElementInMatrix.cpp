#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kthSmallest(int mat[4][4], int n, int k) {
    // priority_queue<pair<int, pair<int, int>>, vector <pair<int, pair<int, int >>, greater<pair<int, pair<int, int>>>> >pq;
    priority_queue<pair<int, pair<int, int> >,
        vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > pq;
    for (int i = 0; i < n; i++) {
        pq.push(make_pair(mat[0][i], make_pair(0, i)));
    }
    int ans;
    while (k--) {
        int val = pq.top().first;
        int row = pq.top().second.first;
        int col = pq.top().second.second;
        ans = val;
        pq.pop();
        if (row != n - 1) {
            pq.push(make_pair(mat[row + 1][col], make_pair(row + 1, col)));
        }
    }
    return ans;
    return 0;
}

int main() {
    int mat[4][4] = { {16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 } };
    int n = 4;
    int k = 3;
    cout << kthSmallest(mat, n, k);
    return 0;
}