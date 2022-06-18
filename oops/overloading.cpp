#include<iostream>
using namespace std;

class Demo {
public:
    int first;
    int second;

    void operator+(Demo& temp) {

    }

    void operator ++() {
        cout << "Unary Operator Overloading" << endl;
    }
};

int main() {
    Demo a;
    a++;
    return 0;
}