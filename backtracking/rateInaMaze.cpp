#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<int> >& arr, vector<vector <bool> >& visited, int n) {
    if ((x >= n - 1) && (y >= n - 1) && (arr[x][y] != 1) && (visited[x][y] != 0)) {
        return false;
    }
    return true;
}

void solve(int x, int y, vector<vector<int> >& arr,
    vector <string>& ans, vector<vector <bool> >& visited, int n, string output) {
    if (x >= n && y >= n) {
        cout << " res " << output << endl;
        return;
    }

    // move towards DLRU

    // for D
    if (isSafe(x + 1, y, arr, visited, n)) {
        visited[x][y] = 1;
        solve(x + 1, y, arr, ans, visited, n, output + "D");
        // back track
        visited[x][y] = 1;
    }
    // for L
    if (isSafe(x, y - 1, arr, visited, n)) {
        visited[x][y] = 1;
        solve(x, y - 1, arr, ans, visited, n, output + "L");
        visited[x][y] = 1;
    }
    // for R
    if (isSafe(x, y + 1, arr, visited, n)) {
        visited[x][y] = 1;
        solve(x, y + 1, arr, ans, visited, n, output + "R");
        visited[x][y] = 1;
    }
    // for U
    if (isSafe(x - 1, y, arr, visited, n)) {
        visited[x][y] = 1;
        solve(x - 1, y, arr, ans, visited, n, output + "U");
        visited[x][y] = 1;
    }
}

int main() {
    vector<vector<int> > arr{
        { 1,0,0,0 },
        { 1,1,0,0 },
        { 1,1,0,0 },
        { 0,1,1,1 },
    };
    int n = 4;
    vector <string> ans;
    vector<vector <bool> > visited(n, vector< bool>(n, 0));
    string output = "";
    solve(0, 0, arr, ans, visited, n, output);
    return 0;
}