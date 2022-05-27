#include<iostream>
using namespace std;

// this function increase the address of the pointer
// if ptr address is 100 -> 100+4(int thats why)
void func1(int* p) {
    p = p + 1;
    cout << "Address inside func1" << p << endl;
}

// this function increase the value at the address
// if ptr address is 100 -> value is 10 + 1 -> 11
void func(int* p) {
    *p = *p + 1;
    cout << "Address inside func" << p << endl;
}

int main() {
    int a = 5;
    cout << " a-> " << a << endl;
    cout << " &a " << &a << endl;
    // creating a pointer
    int* ptr = &a;
    cout << " value at ptr " << *ptr << endl;
    cout << " value at ptr " << ptr << endl;
    cout << " size of ptr " << sizeof(ptr) << endl;
    // null ptr
    int* res = 0;
    // cout << " res " << *res << endl;
    // segmentation fault
    func1(ptr);
    func(ptr);
    cout << " ptr " << *ptr << endl;

    return 0;
}