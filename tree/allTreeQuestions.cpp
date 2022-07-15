#include<iostream>
#include<queue>
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

// Q1 - Pre order traversal
void preOrderTraversal(TreeNode* root) {
    // NLR
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Q2 - Post order traversal
void postOrderTraversal(TreeNode* root) {
    // LRN
    if (root == NULL) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Q3 - In Order Traversal
void inOrderTraversal(TreeNode* root) {
    // 
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Q4 - Level Order Traversal
void levelOrderTraversal(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* ele = q.front();
        q.pop();
        cout << ele->data << " ";
        if (ele->left != NULL)
            q.push(ele->left);
        if (ele->right != NULL)
            q.push(ele->right);
    }
}

// Q4 - level order traversal with space
void levelOrderTraversalWithSpace(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        TreeNode* frontNode = q.front();
        q.pop();
        if (frontNode == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << frontNode->data << " ";
            if (frontNode->left != NULL) {
                q.push(frontNode->left);
            }
            if (frontNode->right != NULL) {
                q.push(frontNode->right);
            }
        }
    }
}

// Q4 - leetcode solution by me
vector<vector<int> > levelOrderTraversalWithSpaceLeetcode(TreeNode* root) {
    vector< vector<int> >result;
    queue<TreeNode*> q;
    q.push(root);
    vector<int> re;
    re.push_back(root->data);
    result.push_back(re);
    while (!q.empty()) {
        vector<int> temp;
        TreeNode* frontNode = q.front();
        q.pop();
        if (frontNode->left != NULL) {
            q.push(frontNode->left);
            temp.push_back(frontNode->left->data);
        }
        if (frontNode->right != NULL) {
            q.push(frontNode->right);
            temp.push_back(frontNode->right->data);
        }
        if (temp.size() != 0)
            result.push_back(temp);
    }
    return result;
}

// Q4 - leetcode solution
vector<vector<int> > levelOrderTraversalWithSpaceLeetcodeSol(TreeNode* root) {
    vector< vector<int> >result;
    queue<TreeNode*> q;
    q.push(root);
    vector<int> temp;
    q.push(nullptr);
    while (!q.empty()) {
        TreeNode* frontNode = q.front();
        q.pop();
        if (!frontNode) {
            if (!q.empty()) {
                q.push(nullptr);
            }
            result.push_back(temp);
            temp.clear();
        }
        else {
            temp.push_back(frontNode->data);
            if (frontNode->left)
                q.push(frontNode->left);
            if (frontNode->right)
                q.push(frontNode->right);
        }
    }
    return result;
}

// Q5 - height of the binary tree
int height(TreeNode* root) {
    if (root == NULL)
        return 0;
    int leftArray = height(root->left);
    int rightArray = height(root->right);

    return max(leftArray, rightArray) + 1;
}

// Q6 - check weather it is balanced tree or not
bool isBalance(TreeNode* root) {
    if (root == NULL) {
        return true;
    }

    bool isLeftBalanced = isBalance(root->left);
    bool isRightBalanced = isBalance(root->right);
    bool diff = abs(height(root->left) - height(root->right)) <= 1;
    if (isLeftBalanced && isRightBalanced && diff)
        return true;
    else
        return false;
}

// Q7 Is the binary tree is symmetric or not
bool solveSymmetric(TreeNode* first, TreeNode* second) {
    if (first != NULL && second == NULL)
        return false;
    if (first == NULL && second != NULL)
        return false;
    if (first == NULL && second == NULL)
        return true;
    if (first->data != second->data)
        return false;
    return solveSymmetric(first->left, second->right) && solveSymmetric(first->right, second->left);
}
bool isSymmetric(TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    return solveSymmetric(root->left, root->right);
}

// Q8 Root to leaf path sum
bool hasPathSum(TreeNode* root, int s) {
    if (root == NULL)
        return false;
    if (root->data == s && root->left == NULL && root->right == NULL)
        return true;

    bool leftCheck = hasPathSum(root->left, s - root->data);
    bool rightCheck = hasPathSum(root->right, s - root->data);

    return leftCheck || rightCheck;
}

TreeNode* LCA(TreeNode* root, int n1, int n2) {
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    TreeNode* leftTree = LCA(root->left, n1, n2);
    TreeNode* rightTree = LCA(root->right, n1, n2);

    if (leftTree != NULL && rightTree != NULL)
        return root;
    if (leftTree != NULL && rightTree == NULL)
        return leftTree;
    else
        return rightTree;
}

int main() {
    TreeNode* root = buildTree();
    // preOrderTraversal(root);
    // cout << endl;
    // postOrderTraversal(root);
    // cout << endl;
    // inOrderTraversal(root);
    // levelOrderTraversalWithSpace(root);
    // vector<vector<int> > res = levelOrderTraversalWithSpaceLeetcodeSol(root);
    // cout << res.size() << endl;
    // for (int i = 0; i < res.size(); i++) {
    //     for (int j = 0; j < res[i].size(); j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << " Height " << height(root) << endl;
    cout << " Is Balanced " << isBalance(root) << endl;
    cout << " Is Symmetric " << isSymmetric(root) << endl;
    cout << " Is Path sum leaf " << hasPathSum(root, 5) << endl;
    TreeNode* res = LCA(root, 7, 5);
    cout << res->data << endl;
    return 0;
}
// 1 2 7 -1 -1 5 -1 -1 3 -1 -1
// 3 9 -1 -1 20 15 -1 -1 7 -1 -1