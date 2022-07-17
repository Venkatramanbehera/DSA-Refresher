#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        left = right = NULL;
    }
};

// Q1 . create a binary search tree
void createBinarySearchTree() {

}

// Q2 . search a node
bool serach(Node* root, int target) {
    if (root == NULL)
        return false;
    if (root->data == target)
        return true;
    if (root->data < target) {
        bool leftAns = serach(root->left, target);
        if (leftAns)
            return true;
    }
    else {
        bool rightAns = serach(root->right, target);
        if (rightAns)
            return true;
    }
    return false;
}

int main() {

    return 0;
}