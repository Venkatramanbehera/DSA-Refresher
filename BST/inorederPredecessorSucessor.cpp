#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(Node* root, int data) {
    if (root == NULL) {
        Node* temp = new Node(data);
        return temp;
    }
    if (data > root->data) {
        root->right = buildBST(root->right, data);
    }
    else {
        root->left = buildBST(root->left, data);
    }
    return root;
}

void createBST(Node*& root) {
    cout << "Enter the value for Root Node" << endl;
    int data;
    cin >> data;
    while (data != -1) {
        root = buildBST(root, data);
        cout << "Enter the data for node " << endl;
        cin >> data;
    }
}

void inorederPredecessor(Node* root, Node*& pre, Node*& suc, int key) {
    if (root == NULL)
        return;
    if (root->data == key) {
        if (root->left != NULL) {
            Node* temp = root->left;
            while (temp->right) {
                temp = temp->right;
            }
            pre = temp;
        }
        if (root->right != NULL) {
            Node* temp = root->right;
            while (temp->left) {
                temp = temp->left;
            }
            suc = temp;
        }
        return;
    }
    if (root->data > key) {
        suc = root;
        inorederPredecessor(root->left, pre, suc, key);
    }
    else {
        pre = root;
        inorederPredecessor(root->right, pre, suc, key);
    }
}

int main() {
    Node* root = NULL;
    createBST(root);
    Node* pre = NULL;
    Node* suc = NULL;
    inorederPredecessor(root, pre, suc, 100);
    cout << "Pre data" << pre->data << endl;
    cout << "suc data" << suc->data << endl;
    return 0;
}