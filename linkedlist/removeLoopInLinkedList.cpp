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

Node* detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

void detectAndRemove(Node*& head) {
    if (head == NULL) {
        return;
    }
    Node* fast = detectLoop(head);
    cout << "Intersction Points " << fast->data << endl;
    Node* slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    Node* target = fast;
    cout << "Intersction Points " << fast->data << endl;
    while (slow->next != target) {
        slow = slow->next;
    }
    cout << "Intersction Points " << slow->data << endl;
    slow->next = NULL;
}

int main() {

    Node* newNode = new Node(1);

    Node* head = newNode;
    Node* tail = newNode;

    traverseList(head);
    insertAtTail(tail, 2);
    traverseList(head);
    insertAtTail(tail, 3);
    traverseList(head);
    insertAtTail(tail, 4);
    traverseList(head);
    insertAtTail(tail, 5);
    traverseList(head);
    insertAtTail(tail, 6);
    traverseList(head);
    head->next->next->next->next->next->next = head->next->next;
    detectAndRemove(head);
    traverseList(head);
    return 0;
}