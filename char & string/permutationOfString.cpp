#include<iostream>
using namespace std;

bool check(int ch[26], int ch2[26]) {
    for (int i = 0; i < 26; i++) {
        if (ch[i] != ch2[i]) {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2) {
    // ceated the freqency of 1st string
    int charFreq[26] = { 0 };
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        charFreq[index]++;
    }

    int i = 0;
    int window_size = s1.length();
    int count[26] = { 0 };
    while (i < window_size) {
        int index = s2[i] - 'a';
        count[index]++;
        i++;
    }

    // check both freq char is same or not
    if (check(charFreq, count)) {
        return 1;
    }
    while (i < s2.length()) {
        int index = s2[i] - 'a';
        count[index]++;

        int oldIndex = s2[i - window_size] - 'a';
        count[oldIndex]--;

        i++;

        if (check(charFreq, count)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    string s1 = "ob";
    string s2 = "eidbaooo";
    cout << checkInclusion(s1, s2) << endl;
    return 0;
}