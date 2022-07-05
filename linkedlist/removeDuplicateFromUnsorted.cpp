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

int linkedListLength(Node*& head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void traverseList(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosTail(Node*& head, Node*& tail, int val) {
    cout << "Value" << val << endl;
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* removeDuplicates(Node*& head) {
    int val = -1;
    Node* curr = head;
    Node* res = NULL;
    Node* newHead = res;
    Node* newTail = res;

    while (curr != NULL) {
        // cout << curr->data << endl;
        if (curr->data != val) {
            insertAtPosTail(newHead, newTail, curr->data);
            val = curr->data;
        }
        curr = curr->next;
    }
    return newHead;
}


int main() {

    Node* newNode = new Node(5);

    Node* head = newNode;
    Node* tail = newNode;

    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 4);
    traverseList(head);

    Node* result = removeDuplicates(head);
    traverseList(result);
    return 0;
}