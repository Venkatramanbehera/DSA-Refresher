#include<iostream>
#include<vector>
#include<queue>
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

void levelOrderTraversal(Node*& root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node* front = q.front();
        q.pop();
        // tu nikal
        if (front == NULL) {
            cout << endl;
            // catch here 
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << front->data << " ";
            // bache chod jaio
            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }
}

int main() {
    Node* root = buildTree();
    levelOrderTraversal(root);
    return 0;
}