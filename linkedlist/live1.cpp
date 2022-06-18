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

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(Node*& head, int pos, int data) {
    if (pos == 1) {
        insertAtHead(head, data);
    }
    else {
        Node* newNode = new Node(data);
        Node* temp = head;
        int count = 1;
        while (count < pos - 1) {
            count++;
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(Node*& head, int target, int pos) {
    Node* temp = head;
    Node* prev = NULL;
    if (target == temp->data && pos == 1) {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else {

    }
}

void print(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(5);
    // cout << node1->data << " " << node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtPos(head, 5, 0);
    // insertAtTail(tail, 6);
    print(head);
    return 0;
}