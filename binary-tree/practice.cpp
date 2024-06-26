// Binary tree representation in c++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void inorderTraversal(struct Node* node) {
    if (node == nullptr) {
        return;
    }
    inorderTraversal(node->left);   // Visit left subtree
    cout << node->data << " ";     // Print node data
    inorderTraversal(node->right);  // Visit right subtree
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    cout << "In-order traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
