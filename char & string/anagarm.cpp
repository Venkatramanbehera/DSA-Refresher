#include<iostream>
#include<string.h>
using namespace std;

bool checkAnagram(string s1, string s2) {
    int freq[26] = { 0 };
    // cout << strlen(freq) << endl;
    for (int i = 0; i < s1.length(); i++) {
        char character = s1[i];
        int index = character - 'a';
        freq[index]++;
    }
    for (int j = 0; j < s2.length(); j++) {
        char character = s2[j];
        int index = character - 'a';
        freq[index]--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string a = "chikuu";
    string b = "chikue";
    cout << checkAnagram(a, b) << endl;
    return 0;
}