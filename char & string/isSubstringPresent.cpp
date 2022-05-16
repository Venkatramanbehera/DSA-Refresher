#include<iostream>
using namespace std;

bool check(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    int end = m - n + 1;
    for (int i = 0; i < end; i++) {
        bool isPresent = true;
        for (int j = 0; j < n; j++) {
            if (s1[i + j] != s2[j]) {
                isPresent = false;
                break;
            }
        }
        if (isPresent == true) {
            return true;
        }
    }
    return false;
}

// Given two strings s1 and s2, find if s1 is a substring of s2.
// If yes, return the index of the first occurrence, else return -1.

int main() {
    string s1 = "babbar";
    string s2 = "abb";
    cout << check(s1, s2) << endl;
    // cout << s1.find(s2) << endl;
    return 0;
}