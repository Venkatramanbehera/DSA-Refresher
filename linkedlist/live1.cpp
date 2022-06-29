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

void addDigit(Node*& head, Node*& tail, int digit) {
    Node* newNode = new Node(digit);
    cout << "Added " << digit << endl;
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        cout << " ** " << head->data << endl;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* addOneTohead(Node*& head) {
    int carray = 0;
    Node* temp = head;
    Node* one = new Node(1);
    Node* newHead = NULL;
    Node* newTail = NULL;
    while (temp != NULL && one != NULL) {
        int res = temp->data + one->data + carray;
        int digit = res % 10;
        addDigit(newHead, newTail, digit);
        carray = res / 10;
        temp = temp->next;
        one = one->next;
    }
    while (temp != NULL) {
        int res = temp->data + carray;
        int digit = res % 10;
        addDigit(newHead, newTail, digit);
        carray = res / 10;
        temp = temp->next;
    }
    while (carray != 0) {
        int res = carray;
        int digit = res % 10;
        addDigit(newHead, newTail, digit);
        carray = res / 10;
    }
    return newHead;
}

int main() {
    Node* node1 = new Node(4);
    // cout << node1->data << " " << node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    // insertAtPos(head, 5, 0);
    // insertAtTail(tail, 6);
    Node* res = addOneTohead(head);
    print(res);
    return 0;
}