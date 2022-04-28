#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    int c = a & b;
    int d = a | b;
    cout << c << endl;
    cout << d << endl;
    cout << "(a & 1)" << (a & 1) << endl;
    cout << "(a & 0)" << (a & 0) << endl;
    cout << "(a | 1)" << (a | 1) << endl;
    cout << "(a | 0)" << (a | 0) << endl;
    return 0;
}