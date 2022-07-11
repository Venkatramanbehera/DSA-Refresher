#include<iostream>
using namespace std;

// Approach 1
int equilibriumPoint(long long a[], int n) {
    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = 0;
        for (int j = 0; j < i; j++) {
            left += a[j];
        }
        for (int k = i + 1; k < n; k++) {
            right += a[k];
        }
        if (left == right) {
            return i + 1;
        }
    }
    return -1;
}

// Approach 2
int equilibriumPoint2(long long a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        sum -= a[i];
        if (res == sum) {
            return i + 1;
        }
        res += a[i];
    }
    return -1;
}

int main() {
    long long a[] = { 1,3,5,2,2 };
    int n = 5;
    cout << " Equli " << equilibriumPoint2(a, n) << endl;
    return 0;
}

// -7, 1, 5, 2, -4, 3, 0 sum = 0
// 