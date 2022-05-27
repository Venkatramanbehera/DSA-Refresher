#include<iostream>
#include<string.h>
using namespace std;

void compression(char ch[]) {
    string result = "";
    for (int i = 0; i < strlen(ch); ) {
        string s;
        s.push_back(ch[i]);
        for (int j = i + 1; j < strlen(ch); j++) {
            if (s.back() == ch[j]) {
                s.push_back(ch[j]);
            }
            else {
                break;
            }
        }
        result.push_back(s[0]);
        result.push_back(s.length());
        i = i + s.length();
    }
    cout << "Result " << result << endl;
}

int main() {
    char chars[] = { 'a', 'a', 'b', 'b', 'c', 'c', 'c' };
    compression(chars);
    return 0;
}