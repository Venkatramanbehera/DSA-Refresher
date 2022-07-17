#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums) {
    vector<int> result;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }
    int firstCounter = 0;
    int secondCounter = 0;
    for (auto i : mp) {
        // cout << i.first << "->" << i.second << endl;
        if (i.second == 1) {
            secondCounter += i.second;
            // cout << " Tets 1" << endl;
        }
        if (i.second % 2 == 0) {
            firstCounter = firstCounter + i.second / 2;
            // cout << " Tets 2" << endl;
        }
        else {
            // cout << " Tets 3 second" << i.second << endl;
            firstCounter = firstCounter + i.second / 2;
            if (i.second != 1)
                secondCounter = secondCounter + i.second % 2;
            // cout << " Tets 3" << endl;
        }
    }
    result.push_back(firstCounter);
    result.push_back(secondCounter);
    return result;
}

int main() {
    vector<int> nums;
    nums.push_back(1);

    vector<int> res = numberOfPairs(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}