#include<iostream>
#include<string.h>
using namespace std;

int getLength(char ch[]) {

    int length = 0;
    int index = 0;
    while (ch[length] != '\0') {
        length++;
        index++;
    }

    return length;
}

void reverseString(char ch[]) {
    int start = 0;
    int end = strlen(ch) - 1;
    while (start <= end) {
        swap(ch[start++], ch[end--]);
    }
}

int main() {
    char name[10];
    char name2[10] = "chiku";
    char name3[10] = "chiku";
    // cin >> name;
    // cout << name << strlen(name) << endl;
    cout << strcmp(name2, name3) << endl;
    // reverseString(name);
    // cout << name << endl;

    string str;
    // cin >> str;
    getline(cin, str);
    cout << str;
    return 0;
}