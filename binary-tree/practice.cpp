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

// breath order travesal( Level Order Traversal )

//     1
//    / \
    //   2   3
//  / \ / \
    // 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void levelOrderTraversal(Node* root) {
//     if (root == nullptr) return;

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();
//         cout << current->data << " ";

//         if (current->left != nullptr) {
//             q.push(current->left);
//         }

//         if (current->right != nullptr) {
//             q.push(current->right);
//         }
//     }
// }

// int main() {
//     // Creating a simple binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Level order traversal: ";
//     levelOrderTraversal(root);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// Iterative Preorder Traversal in Binary Tree

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root){
//     vector<int> preorder;
//     if(root == nullptr) return preorder;

//     stack<Node*> st;
//     st.push(root);

//     while (!st.empty())
//     {
//         root = st.top();
//         st.pop();
//         preorder.push_back(root->data);

//         if(root->left != NULL) st.push(root->right);
//         if(root->right != NULL) st.push(root->left);
//     }
//     return preorder;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Level order traversal: ";
//     cout << "Preorder traversal: ";
//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Iterative Inorder traversal in binary tree..!!
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node *root) {
//     vector<int> inorder;
//     stack<Node *> st;
//     Node *curr = root;

//     while (curr != nullptr || !st.empty()) {
//         while (curr != nullptr) {
//             // Place pointer to a tree node on the stack before traversing the node's left subtree
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();
//         inorder.push_back(curr->data);

//         // We have visited the node and its left subtree. Now, it's right subtree's turn
//         curr = curr->right;
//     }

//     return inorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);

//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Iterative Postorder Traversal using 2 stacks [left right root]

//     1
//    / \
//   2   3
//  / \ / \
// 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root) {
//     vector<int> postorder;
//     if (root == nullptr) return postorder;

//     stack<Node*> st1, st2;
//     st1.push(root);

//     while (!st1.empty()) {
//         Node* node = st1.top();
//         st1.pop();
//         st2.push(node);

//         if (node->left != nullptr) st1.push(node->left);
//         if (node->right != nullptr) st1.push(node->right);
//     }

//     while (!st2.empty()) {
//         postorder.push_back(st2.top()->data);
//         st2.pop();
//     }

//     return postorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Iterative Postorder Traversal using 1 stacks [left right root]

//     1
//    / \
//   2   3
//  / \ / \
// 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root) {
//     vector<int> postorder;
//     if (root == nullptr) return postorder;

//     stack<Node*> st;
//     Node* curr = root;
//     Node* lastVisited = nullptr;

//     while (!st.empty() || curr != nullptr) {
//         if (curr != nullptr) {
//             st.push(curr);
//             curr = curr->left;
//         } else {
//             Node* topNode = st.top();
//             if (topNode->right != nullptr && lastVisited != topNode->right) {
//                 curr = topNode->right;
//             } else {
//                 postorder.push_back(topNode->data);
//                 lastVisited = topNode;
//                 st.pop();
//             }
//         }
//     }

//     return postorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Preorder Inorder Postorder Traversals in One Traversals..!!

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

// void fn(Node* root, vector<int>& pre, vector<int>& in, vector<int>& post) {
//     if (root == nullptr) return;

//     stack<pair<Node*, int>> st;
//     st.push({root, 1});

//     while (!st.empty()) {
//         auto item = st.top();
//         st.pop();

//         // This is part of pre-order
//         // Increment 1 to 2
//         // Push the left side of the tree
//         if (item.second == 1) {
//             pre.push_back(item.first->data);
//             item.second++;
//             st.push(item);

//             if (item.first->left != nullptr) {
//                 st.push({item.first->left, 1});
//             }
//         }
//         // This is a part of in-order
//         // Increment 2 to 3
//         // Push the right side of the tree
//         else if (item.second == 2) {
//             in.push_back(item.first->data);
//             item.second++;
//             st.push(item);

//             if (item.first->right != nullptr) {
//                 st.push({item.first->right, 1});
//             }
//         }
//         // Don't push item back again
//         else {
//             post.push_back(item.first->data);
//         }
//     }
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> pre, in, post;
//     fn(root, pre, in, post);

//     cout << "Preorder traversal: ";
//     for (int val : pre) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Inorder traversal: ";
//     for (int val : in) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Postorder traversal: ";
//     for (int val : post) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
//  Maximum Depth in Binary Tree

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
//     }
// };

// // Renaming fn to maxDepth for clarity
// int maxDepth(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     return 1 + max(lh, rh);
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Maximum Depth of the tree: " << maxDepth(root) << endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// determine if a binary tree is balanced or not ?

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
//     }
// };

// int fn(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int lh = fn(root->left);
//     int rh = fn(root->right);
//     if (lh == -1 && rh == -1)
//         return -1;

//     if (abs(lh - rh > 1))
//         return -1;
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     int ans = fn(root);
//     if(ans == -1) {
//         cout << "this is not a balanced binary tree";
//     } else {
//         cout << "this is a balanced binary tree";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// determine diameter of binary tree ?
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

int height(Node* root, int& diameter) {
    if (!root)
        return 0;

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);

    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);
}

int diameter(Node* root) {
    int diameter = 0;
    height(root, diameter);
    return diameter;
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int ans = diameter(root);
    cout << "The diameter of the binary tree is: " << ans << endl;

    return 0;
}
