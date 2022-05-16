#include<iostream>
#include<string.h>
using namespace std;

void reverseString(char ch[]) {
    int len = strlen(ch);
    int start = 0;
    int end = len - 1;
    while (start < end) {
        swap(ch[start++], ch[end--]);
    }
}

int main() {
    char ch[] = "chiku";
    reverseString(ch);
    return 0;
}