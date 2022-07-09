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

int height(Node* root) {
    // Base Case
    if (root == NULL) {
        return 0;
    }
    // find out the left side height
    int leftSide = height(root->left);
    // find out the right side height
    int rightSide = height(root->right);
    // max height of that root
    return 1 + max(leftSide, rightSide);
}

int dimeter(Node* root) {
    // Edge Case
    if (root == NULL) {
        return 0;
    }
    // find out the left height
    int heightOfLeft = dimeter(root->left);
    // find out the right height
    int heightOfRight = dimeter(root->right);
    // return the left height and right height
    int leftWithRight = 1 + height(root->left) + height(root->right);
    return max(heightOfLeft, max(heightOfRight, leftWithRight));
}

int main() {
    Node* root = buildTree();
    cout << " Height " << height(root) << endl;
    cout << " Dimeter " << dimeter(root) << endl;
    return 0;
}
// 10 5 3 -1 -1 7 6 -1 -1 -1 11 -1 -1
// 1 2 4 -1 -1 5 -1 -1 3 -1 -1
// 5 5 -1 4 10 -1 8 5 -1 8 8 -1 6 -1 -1 -1 -1 -1 -1