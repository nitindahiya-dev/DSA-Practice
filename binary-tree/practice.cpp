// // Binary tree representation in c++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void inorderTraversal(struct Node* node) {
//     if (node == nullptr) {
//         return;
//     }
//     inorderTraversal(node->left);   // Visit left subtree
//     cout << node->data << " ";     // Print node data
//     inorderTraversal(node->right);  // Visit right subtree
// }

// int main() {
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->right = new Node(5);

//     cout << "In-order traversal of the binary tree: ";
//     inorderTraversal(root);
//     cout << endl;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Preorder traversal of binary tree ...!!

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* right;
//     struct Node* left;
//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     };
// };

// void preorder(Node* node){
//     if(node == nullptr) return;

//     cout << node->data << " ";
//     preorder(node->left);
//     preorder(node->right);
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder traversal: ";
//     preorder(root);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// inorder travesal in binary tree !!

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     };
// };

// void inorder(Node *node)
// {
//     if (node == nullptr)
//         return;

//     inorder(node->left);
//     cout << node->data << " ";

//     inorder(node->right);
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder traversal: ";
//     inorder(root);
// }

// --------------------------------------------------------------------------------------------------

// post order travesal in binary tree !!
// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     };
// };

// void postorder(Node* node){
//     if(node == nullptr) return;

//     postorder(node->left);
//     postorder(node->right);
//     cout << node->data << " ";
// }

// int main(){
//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     postorder(root);
//     return 0;
// }

// --------------------------------------------------------------------------------------------

// breath order travesal
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if (current->left != nullptr) {
            q.push(current->left);
        }

        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}

int main() {
    // Creating a simple binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Level order traversal: ";
    levelOrderTraversal(root);

    return 0;
}
