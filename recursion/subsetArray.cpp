#include<iostream>
#include<vector>
using namespace std;

void powerSet(vector<int>& input, int index, vector<int>& output, vector<vector<int> >& res) {
    // base case
    if (index >= input.size()) {
        res.push_back(output);
        return;
    }
    // current element
    int ans = input[index];
    // exclude 
    powerSet(input, index + 1, output, res);
    // include
    output.push_back(ans);
    powerSet(input, index + 1, output, res);
}

int main() {
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    vector<int> output;
    vector<vector<int> > res;
    powerSet(input, 0, output, res);
    // for (int i = 0; i < res.size(); i++) {
    //     for (int j = 0; j < res[0].size(); j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}