#include<iostream>
using namespace std;

int binaryToDecimal(int N) {
    int sum = 0;
    while (N != 0) {
        int rem = N % 2;
        sum = sum * 10 + rem;
        N = N / 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << " Binary Num " << binaryToDecimal(n) << endl;
    return 0;
}