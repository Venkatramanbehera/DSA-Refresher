#include<iostream>
using namespace std;

int main() {

    int a = 5;
    int* p = &a;
    int** q = &p;
    cout << a << endl; // 5
    cout << &a << endl; // address
    // cout << *a << endl; -> error because it is not a pointer

    cout << " p " << endl;
    cout << p << endl; // address
    cout << *p << endl; // value at address ans-: 5
    cout << &p << endl; // address of p

    cout << " q " << endl;
    cout << q << endl; // address of p
    cout << *q << endl; // value of p
    cout << **q << endl; // value at address
    cout << &q << endl; // address of q

    cout << "All Good" << endl;
    return 0;
}