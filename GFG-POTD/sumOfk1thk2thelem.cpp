#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
{
    // Your code goes here
    long long result = 0;
    sort(A, A + N);
    // for (int i = 0; i < N; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    long long count = 0;
    for (int i = K1; i < K2 - 1; i++) {
        // cout << A[i] << " ";
        count += A[i];
    }
    // cout << endl;
    // cout << count << endl;
    return count;
}

int main() {
    long long A[] = { 20, 8, 22, 4, 12, 10, 14 };
    long long N = 7;
    long long k1 = 3;
    long long k2 = 6;
    cout << sumBetweenTwoKth(A, N, k1, k2) << endl;
    return 0;
}