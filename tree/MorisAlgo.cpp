#include<iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
};

TreeNode* buildTree() {
    int data;
    cin >> data;

    if (data == -1)
        return NULL;
    TreeNode* newNode = new TreeNode(data);
    newNode->left = buildTree();
    newNode->right = buildTree();
    return newNode;
}

TreeNode* getPredecessor(TreeNode* currNode) {
    if (currNode == NULL)
        return NULL;
    TreeNode* temp = currNode->left;
    if (temp == NULL)
        return NULL;
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}

// Q1 - Inorder using moris traversal
void inOrderMoris(TreeNode* root) {
    TreeNode* curr = root;
    while (curr != NULL) {
        // print all left (L)
        if (curr->left == NULL) {
            cout << curr->data << " ";
            curr = curr->right;
        }
        else {
            TreeNode* pred = curr->left;
            while (pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }
            // creating linking
            if (pred->right == NULL) {
                pred->right = curr;
                curr = curr->right;
            }
            else {
                // delete linking
                pred->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}


int main() {
    TreeNode* root = buildTree();
    inOrderMoris(root);
    // cout << getPredecessor(root)->data << endl;
    return 0;
}
// 1 2 7 -1 -1 5 -1 -1 3 -1 -1