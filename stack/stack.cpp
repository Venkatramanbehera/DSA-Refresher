#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;

    Stack(int s) {
        arr = new int[size];
        top = -1;
        this->size = s;
    }
    void push(int d) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = d;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top--;
    }
    int getSize() {
        return this->size + 1;
    }
    int topEl() {
        if (top != -1) {
            return arr[top];
        }
        else {
            return -1;
        }
    }
    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};



int main() {
    Stack* st = new Stack(5);
    st->push(5);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    cout << st->getSize() << endl;
    // while()
    return 0;
}