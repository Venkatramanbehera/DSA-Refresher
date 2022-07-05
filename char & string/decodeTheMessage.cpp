#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

bool isCheck(unordered_map<char, char> mp, char ch) {
    if (mp.find(ch) == mp.end()) {
        return false;
    }
    return true;
}

string decodeMessage(string key, string message) {
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int alphabetIndex = 0;
    unordered_map<char, char> mp;
    for (int i = 0; i < key.length(); i++) {
        if (alphabetIndex < 26 && key[i] != ' ' && !isCheck(mp, key[i])) {
            mp[key[i]] = arr[alphabetIndex];
            alphabetIndex++;
        }
    }
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            result += mp[message[i]];
        }
        else {
            result += ' ';
        }
    }
    return result;
}

int main() {
    string key = "eljuxhpwnyrdgtqkviszcfmabo";
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    cout << decodeMessage(key, message);
    return 0;
}