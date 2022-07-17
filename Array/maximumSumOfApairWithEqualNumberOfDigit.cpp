#include<iostream>
#include<vector>
#include<map>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void maximumSum(vector<int>& nums) {
    vector<int> digits;
    map<int, vector<int> > mp;
    int sum = -1;
    for (int i = 0; i < nums.size(); i++) {
        int sumDigit = sumOfDigits(nums[i]);
        mp[sumDigit].push_back(nums[i]);
    }
    for (auto i : mp) {
        if (i.second.size() >= 2) {
            int sumElement = 0;
            for (auto j : i.second) {
                sumElement += j;
            }
            sum = max(sum, sumElement);
        }
    }
    cout << "Sum" << sum << endl;
}

int main() {
    vector<int> nums;
    nums.push_back(18);
    nums.push_back(43);
    nums.push_back(36);
    nums.push_back(13);
    nums.push_back(7);
    // nums.push_back(10);
    // nums.push_back(12);
    // nums.push_back(19);
    // nums.push_back(14);
    // maximumSum(nums);
    return 0;
}