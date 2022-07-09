#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    cout << " Enter data " << endl;
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }

    Node* newNode = new Node(data);

    cout << " Left Of " << data << endl;
    newNode->left = buildTree();

    cout << " Right Of " << data << endl;
    newNode->right = buildTree();

    return newNode;
}

void preOrder(Node*& root)
{
    // N L R
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node*& root)
{
    if (root == NULL) {
        return;
    }
    // L
    inOrder(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrder(root->right);
}

void postOrder(Node*& root)
{
    if (root == NULL) {
        return;
    }
    // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    root = buildTree();
    cout << endl;
    cout << " PreOrder " << endl;
    preOrder(root);
    cout << " Iorder " << endl;
    inOrder(root);
    cout << " PostOrder " << endl;
    postOrder(root);
    return 0;
}