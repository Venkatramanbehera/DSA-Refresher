#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node*& head) {
    Node* temp = head;
    int counter = 0;
    while (temp != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node*& tail, Node*& head, int pos, int d) {
    // insert in first position
    if (pos == 1) {
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;

    int count = 1;
    while (count < pos - 1) {
        temp = temp->next;
        count++;
    }

    // if we wants to insert in last
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // insert at middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}


int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout << getLength(head) << endl;
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    insertAtTail(tail, 5);
    insertAtPosition(tail, head, 6, 4);
    print(head);
    return 0;
}