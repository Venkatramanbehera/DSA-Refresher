#include<iostream>
using namespace std;

void count(int n) {
    if (n == 0) {
        return;
    }
    n = n - 1;
    count(n);
    cout << n << endl;
}

// int findFromArray(int arr[]) {
//     if()
// }

int expo(int n) {
    if (n == 0) {
        return 1;
    }
    int smallProblem = expo(n / 2);
    if (n & 1) {
        return smallProblem * smallProblem * 2;
    }
    else {
        return smallProblem * smallProblem;
    }
}

int main() {
    int n;
    cin >> n;
    cout << expo(n);
    return 0;
}