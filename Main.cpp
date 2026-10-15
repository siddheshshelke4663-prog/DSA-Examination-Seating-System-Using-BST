#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

struct Node {
    int roll;
    Node *left, *right;

    Node(int r) {
        roll = r;
        left = right = NULL;
    }
};

Node* buildTree(vector<int>& a, int& i, long long low, long long high) {
    if (i == a.size() || a[i] <= low || a[i] >= high)
        return NULL;

    Node* root = new Node(a[i++]);
    root->left = buildTree(a, i, low, root->roll);
    root->right = buildTree(a, i, root->roll, high);
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->roll << " ";
        inorder(root->right);
    }
}

void levelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* t = q.front();
        q.pop();
        cout << t->roll << " ";

        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    vector<int> a(n);
    cout << "Enter preorder sequence of roll numbers: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    Node* root = buildTree(a, i, LLONG_MIN, LLONG_MAX);

    if (i != n)
        cout << "Invalid BST preorder sequence.\n";
    else {
        cout << "\nInorder Traversal: ";
        inorder(root);

        cout << "\nLevel-order Traversal: ";
        levelOrder(root);
        cout << endl;
    }

    return 0;
}

