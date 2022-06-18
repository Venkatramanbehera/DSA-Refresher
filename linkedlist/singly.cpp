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

void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node*& tail, int data) {
    Node* temp = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPos(Node*& head, Node*& tail, int pos, int data) {
    if (pos > linkedListLength(head) + 1) {
        cout << " Can not add the value at that Position" << endl;
        return;
    }
    if (pos == 1) {
        insertAtHead(head, data);
    }
    else {
        Node* temp = head;
        int count = 1;
        while (count < pos - 1) {
            temp = temp->next;
            count++;
        }
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        if (linkedListLength(head) == pos) {
            tail = newNode;
        }
    }
}

void deleteNode(int pos, Node*& head, Node*& tail) {
    if (pos > linkedListLength(head)) {
        cout << " Can not delete " << endl;
        return;
    }
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        Node* cur = head;
        Node* prev = NULL;
        int count = 1;
        while (count < pos) {
            prev = cur;
            cur = cur->next;
            count++;
        }
        if (linkedListLength(head) == pos) {
            tail = prev;
        }
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
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

Node* reverse(Node*& head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Node* reverseRecursion(Node*& curr, Node* prev) {
//     // base case
//     if (curr == NULL) {
//         return prev;
//     }

//     Node* forward = curr->next;
// }

Node* getMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool isCircular(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->next == head) {
            return true;
        }
    }
    return false;
}

int main() {
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 4);
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    // insertAtTail(tail, 2);
    // insertAtPos(head, tail, 5, 100);
    traverseList(head);
    // head = reverse(head);
    // traverseList(head);
    Node* temp = getMiddle(head);
    cout << " jjkjk " << temp->data << endl;
    cout << "  ;;;; " << isCircular(head) << endl;
    // deleteNode(5, head, tail);
    // traverseList(head);
    // cout << "Value at head -> " << head->data << endl;
    // cout << "Value at tail -> " << tail->data << endl;
    return 0;
}