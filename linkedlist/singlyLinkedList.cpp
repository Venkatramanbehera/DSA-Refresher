#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    // memory free
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node*& head, int d) {
    // create the node whose next is head to NULL
    Node* temp = new Node(d);
    // temp of next is points to heads 
    temp->next = head;
    // now head is temp node 
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
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
    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int pos, Node*& head) {
    // deleting 1st node
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting any middle and last node
    else {
        Node* curr = head;
        Node* prev = NULL;

        int counter = 1;
        while (counter < pos) {
            prev = curr;
            curr = curr->next;
            counter++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtPosition(tail, head, 2, 20);
    insertAtPosition(tail, head, 5, 2);
    print(head);
    deleteNode(5, head);
    print(head);
    return 0;
}