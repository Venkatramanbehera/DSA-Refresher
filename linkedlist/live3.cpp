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

int getLength(Node*& head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

Node* rotateAList(Node*& head, int k) {
    int n = getLength(head);
    k = k % n;
    // int numIndex = (getLength(head) - k) % getLength(head);
    int numIndex = n - k;
    cout << "Num Index " << numIndex << endl;
    // cout << "length " << n << endl;
    cout << "k " << k << endl;
    Node* prev = NULL;
    Node* curr = head;
    while (numIndex--) {
        prev = curr;
        curr = curr->next;
    }
    cout << prev->data << endl;
    cout << curr->data << endl;
    prev->next = NULL;
    Node* temp = curr;
    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
    return curr;
}

int main() {
    Node* res = new Node(0);
    Node* head = res;
    Node* tail = res;
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    // insertAtTail(tail, 4);
    // insertAtTail(tail, 5);
    traverseList(head);
    Node* result = rotateAList(head, 4);
    traverseList(result);
    // cout << getLength(head) << endl;
    return 0;
}