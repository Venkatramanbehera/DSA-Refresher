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

// Q1. Reverse a linked list
// 5 3 7 9 -> 9 7 3 5 

Node* reverseLinkedList(Node* head) {
    Node* cur = head;
    Node* prev = NULL;
    while (cur != NULL) {
        Node* nextNode = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextNode;
    }
    return prev;
}

// Q2. Detect  circular linked list or not

bool isLoop(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->next == head) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Q2. Detect loop using slow and first pointer

bool isDetectedLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return true;
        }
    }
    return false;
}

// Q3. Find middle of the linked list
Node* getMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// find kth node from end using recursion
int countKFromLast(Node*& head, int k) {
    if (head == NULL) {
        return 0;
    }
    int count = countKFromLast(head->next, k) + 1;

    if (count == k) {
        cout << head->data << endl;
    }
    return count;
}

Node* detectFirstAndSlow(Node*& head) {
    if (head == NULL) {
        return NULL;
    }
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

bool isDetectedLoopOF(Node*& head) {
    // step 1 : Detect slow and fast pointer where they contradict each other
    Node* res = detectFirstAndSlow(head);
    cout << res->data << endl;
}

int main() {

    Node* node = new Node(5);
    Node* head = node;
    Node* tail = node;
    insertAtTail(tail, 3);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    // tail->next = head;
    insertAtTail(tail, 19);
    traverseList(head);
    isDetectedLoopOF(tail);
    // Node* result = reverseLinkedList(head);
    // traverseList(result);
    // cout << isDetectedLoop(head) << endl;
    // Node* result = getMiddle(head);
    // cout << " &&&& " << result->data << endl;
    return 0;
}