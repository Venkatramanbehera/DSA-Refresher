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
void traverseList(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countkFromEnd(Node*& head, int k) {
    if (head == NULL) {
        return 0;
    }
    int count = countkFromEnd(head->next, k) + 1;
    if (count == k) {
        cout << " data bro " << head->data << endl;
        return head->data;
    }
    return count;
}

int main() {
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 4);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    int k = 2;
    cout << countkFromEnd(head, k) << endl;
    traverseList(head);
    return 0;
}