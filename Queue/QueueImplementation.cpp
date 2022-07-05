#include<iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int front;
    int rear;
    int size;
    Queue(int size) {
        arr = new int[size];
        front = 0;
        rear = 0;
        this->size = size;
    }

    void push(int data) {
        if (rear == front) {
            cout << " UnderFlow ";
        }
        else {
            arr[rear] = data;
            rear++;
        }
    }

    void pop() {
        if (front == rear) {
            cout << " Underflow ";
        }
        else {
            arr[front] = -1;
            front++;

        }
    }

    bool isEmpty() {
        if (front == rear) {
            return true;
        }
        else {
            return false;
        }
    }

    int getSize() {
        return rear - front;
    }
};

int main() {

    return 0;
}