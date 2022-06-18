#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node*& tail, int element, int d) {
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else {
        Node* curr = tail;
        while (curr->data != element) {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node*& tail, int value) {
    if (tail == NULL) {
        cout << " Can not delete " << endl;
    }
    else {
        Node* prev = NULL;
        Node* curr = tail;

    }
}

void print(Node*& tail) {
    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 1, 1);
    print(tail);
    insertNode(tail, 1, 2);
    print(tail);
    insertNode(tail, 1, 9);
    print(tail);
    insertNode(tail, 2, 3);
    print(tail);

    return 0;
}