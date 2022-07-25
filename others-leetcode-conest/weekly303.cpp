#include<iostream>
#include<map>
#include<vector>
using namespace std;

char repeatedCharacter(string s) {
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (mp.find(ch) == mp.end()) {
            mp[ch]++;
        }
        else {
            cout << ch << endl;
            break;
        }
    }
    return 'a';
}

int equalPairs(int arr[3][3]) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 1;
}

int main() {
    int arr[3][3] = {
        {3,2,1},
        {1,7,6},
        {2,7,7}
    };
    equalPairs(arr);
    return 0;
}