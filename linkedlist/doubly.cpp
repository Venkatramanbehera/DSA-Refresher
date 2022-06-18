#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPos(Node*& head, Node*& tail, int pos, int d) {
    if (pos == 1) {
        insertAtHead(head, d);
    }
    else {
        int count = 1;
        Node* temp = head;
        while (count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL) {
            insertAtTail(tail, d);
            return;
        }
        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteNode(Node*& head, int pos) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    else {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while (count < pos) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL) {
            prev->next = NULL;
            return;
        }
        prev->next = curr->next;
        prev->next->prev = prev;
        curr->next = NULL;
        delete curr;
    }
}

void traverseList(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 5);
    insertAtHead(head, 67);
    insertAtHead(head, 23);
    insertAtPos(head, tail, 5, 100);
    // insertAtTail(tail, 2);
    deleteNode(head, 5);
    traverseList(head);
    cout << " Value of head -> " << head->data << endl;
    cout << " Value of tail -> " << tail->data << endl;
    return 0;
}