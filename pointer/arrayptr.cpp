#include<iostream>
using namespace std;

void dummy(int* arr, int  size) {
    cout << sizeof(arr) << endl;
}

int main() {
    int arr[] = { 1,2,3,4,5 };
    // cout << arr << endl;
    // cout << *arr << endl;
    // cout << &arr[0] << endl;
    // cout << &arr << endl;

    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;
    // cout << *(arr + 4) << endl;
    // int i = 0;
    // cout << "i[arr] " << i[arr] << endl;

    // dummy(arr, 5);
    // int* p = arr;
    // cout << *p << endl;
    // char ch[] = "abcd";
    // char* cptr = ch;
    // cout << *cptr << endl;
    // char isc = 'A';
    // char* cf = &isc;
    // cout << cf << endl;

    if (cout << "Babar") {
        cout << "Hello" << endl;
    }
    else {
        cout << "HI" << endl;
    }

    cout << endl;
    char ch[] = "my name is babar";
    char* p = ch;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}