#include<iostream>
using namespace std;

int getLength(char ch[]) {
    int i = 0;
    int count = 0;
    while (ch[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int main() {
    char ch[] = "chiku";
    cout << getLength(ch) << endl;
    return 0;
}