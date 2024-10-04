// Q: insert before head in double link list ?

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node* next;
//     Node* back;
//     Node(int v, Node* n, Node* b): val(v), next(n), back(b) {}
// };

// Node* convert_it(vector<int> arr){
//     Node* head = new Node(arr[0], nullptr,nullptr);
//     Node* prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i], nullptr, prev);
//         prev->next= temp;
//         prev = temp;
//     }
//     return head;
// }

// Node* insert_before_head(Node* head, int val){
//     Node* newhead = new Node(val, head,nullptr);
//     head->back = newhead;
//     return newhead;
// }

// void print(Node* head){
//     while (head != nullptr)
//     {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,6};
//     Node* head = convert_it(arr);
//     head = insert_before_head(head, 10);
//     print(head);
// }

// ----------------------------------------------------------------------------------------------------

// Q : insert element in the at the end of the link list?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *change_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }

//     return head;
// }

// Node *add_to_the_tail(Node *head, int val)
// {
//     Node *tail = head;
//     while (tail->next != nullptr)
//     {
//         tail=tail->next;
//     }
//     Node* newNode = new Node(val);
//     tail->next=newNode;
//     newNode->back= tail;

//     return head;
// }

// void print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = change_it(arr);
//     head = add_to_the_tail(head, 100);
//     print(head);
// }

// -----------------------------------------------------------------------------------------------------

// Q: insert the element just before the tail of the list list?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *change_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }

//     return head;
// }

// Node *add_before_tail(Node *head, int val)
// {
//     if (head->next == nullptr)
//     {
//         return new Node(val);
//     }

//     Node *tail = head;
//     while (tail->next != nullptr)
//     {
//         tail = tail->next;
//     }
//     Node *prev = tail->back;
//         Node *newNode = new Node(val);
//         prev->next = newNode;
//         newNode->back = prev;
//         newNode->next = tail;
//         tail->back = newNode;

//     return head;
// }

// void print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = change_it(arr);
//     head = add_before_tail(head, 100);
//     print(head);
// }

// ---------------------------------------------------------------------------------------------------

// Q: insert before the targeted element ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr){};
// };

// Node *change_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;

//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// Node *insert_it(Node *head, int val, int k)
// {

//     if (head == nullptr)
//     {
//         return new Node(val);
//     }
//     int count = 0;
//     Node *temp = head;
//     Node *prev = NULL;

//     while (temp->next != NULL)
//     {
//         count++;
//         if (count == k)
//         {
//             Node *newNode = new Node(val);
//             prev->next = newNode;
//             temp->back = newNode;
//             newNode->back = prev;
//             newNode->next = temp;
//             if (prev != nullptr)
//                 prev->next = newNode;
//         }

//         prev = temp;
//         temp = temp->next;
//     }
//     Node *newNode = new Node(val);
//     prev->next = newNode;
//     newNode->back = prev;
//     return head;}

// void print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = change_it(arr);
//     head = insert_it(head, 10, 1);
//     print(head);
// }

// ----------------------------------------------------------------------------------------------------

// Q: Insert before the given number in double link list?

// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr){};
// };

// Node *change_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;

//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// void insert_before_given_number(Node* node, int val){
//     Node* prev = node->back;
//     Node* newNode = new Node(val);
//     prev->next = newNode;
//     newNode->next = node;
//     newNode->back = prev;
//     node->back = newNode;

// }

// void print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = change_it(arr);
//     insert_before_given_number(head->next,10);
//     print(head);
// }

// ------------------------------------------------------------------------------------------------------

// Q: Create double linkList ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int v) : val(v), next(nullptr), prev(nullptr) {};
// };

// // Convert array to doubly linked list
// Node* convert_it(vector<int> arr) {
//     if (arr.empty()) return nullptr; // Handle empty array

//     Node* head = new Node(arr[0]);
//     Node* curr = head;

//     // Iterate over the array and create the doubly linked list
//     for (int i = 1; i < arr.size(); i++) {
//         Node* newNode = new Node(arr[i]);
//         curr->next = newNode;   // Set the next pointer
//         newNode->prev = curr;   // Set the previous pointer
//         curr = newNode;         // Move the current pointer
//     }

//     return head;
// }

// // Print list forward
// void printForward(Node *head) {
//     Node *curr = head;
//     while (curr != NULL) {
//         cout << curr->val << " -> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// // Print list backward
// void printBackward(Node *head) {
//     // Move to the end of the list
//     Node *curr = head;
//     while (curr->next != NULL) {
//         curr = curr->next;
//     }

//     // Traverse backward from the end of the list
//     while (curr != NULL) {
//         cout << curr->val << " -> ";
//         curr = curr->prev;
//     }
//     cout << "null" << endl;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};

//     Node* head = convert_it(arr);

//     cout << "Print list forward: " << endl;
//     printForward(head);   // Output in forward direction

//     cout << "Print list backward: " << endl;
//     printBackward(head);  // Output in backward direction

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------

// Q: Adding element on head in double LinkList?

// #include <bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node* back;
//     Node(int v): val(v), next(nullptr), back(nullptr) {}
// };

// Node* convert(vector<int> arr) {
//     if (arr.empty()) return nullptr;  // Handle empty input

//     Node* head = new Node(arr[0]);
//     Node* curr = head;

//     for (int i = 1; i < arr.size(); i++) {
//         Node* newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }

//     return head;
// }

// void print(Node* head) {
//     Node* curr = head;
//     while (curr != nullptr) {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node* add_new_head(Node* head, int x) {
//     Node* newHead = new Node(x);   // Create new node as the new head
//     newHead->next = head;          // Set the next pointer of the new head to the old head

//     if (head != nullptr) {         // If the old head exists, set its back pointer
//         head->back = newHead;
//     }

//     return newHead;  // Return the new head, since it is now the start of the list
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node* dll = convert(arr);
//     cout << "Original list: " << endl;
//     print(dll);

//     dll = add_new_head(dll, 10);  // Update head to the new head
//     cout << "After adding new head: " << endl;
//     print(dll);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------

// Q: Add element in the last in double linkList?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *new_elm = new Node(arr[i]);
//         curr->next = new_elm;
//         new_elm->back = curr;
//         curr = new_elm;
//     }
//     return head;
// }

// Node *add_el(Node *head, int x)
// {
//     Node *curr = head;

//     while (curr != nullptr)
//     {
//         if (curr->next == NULL)
//         {
//             Node *newNode = new Node(x);
//             newNode->back = curr;
//             curr->next = newNode;
//             curr = newNode;
//         }
//         curr = curr->next;
//     }
//     return curr;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *ans = convert(arr);
//     cout << "Before Addition";
//     print(ans);
//     cout << "After Addition";
//     add_el(ans, 100);
//     print(ans);
// }

// --------------------------------------------------------------------------------------------------------

// Q: Delete the last element of the double linklist?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// // Function to convert an array to a doubly linked list
// Node *convert(vector<int> arr)
// {
//     if (arr.empty()) return nullptr;  // Handle empty array case

//     Node *head = new Node(arr[0]);    // Initialize the head node
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *new_node = new Node(arr[i]);
//         curr->next = new_node;
//         new_node->back = curr;
//         curr = new_node;
//     }
//     return head;
// }

// // Function to remove the last element from the doubly linked list
// Node* remove_last(Node* head) {
//     if (head == nullptr || head->next == nullptr) return nullptr;
//     Node* curr = head;

//     // Traverse to the last node
//     while (curr->next != nullptr) {
//         curr = curr->next;
//     }

//     // Now, curr is the last node, delete it
//     curr->back->next = nullptr;  // Set second-to-last node's next to nullptr
//     delete curr;

//     return head;  // Return the updated head
// }

// // Function to print the doubly linked list
// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != nullptr)
//     {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};  // Example array
//     Node *dll = convert(arr);               // Convert array to doubly linked list

//     cout << "Before Removal" << endl;
//     print(dll);

//     dll = remove_last(dll);  // Remove the last element

//     cout << "After Removal" << endl;
//     print(dll);  // Print the list after removal
// }

// Q: Add and remove any element from double double linkList ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }
//     return head;
// }

// Node *add_el(Node *head, int el, int place)
// {
//     Node *curr = head;
//     Node *newNode = new Node(el);
//     int count = 0;

//     if (place == 0)
//     {
//         newNode->next = head;
//         head->back = newNode;
//         head = newNode;
//         return head;
//     }

//     while (curr != NULL && count < place - 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     if (curr != NULL)
//     {
//         newNode->next = curr->next;
//         newNode->back = curr;

//         if (curr->next != NULL)
//         {
//             curr->next->back = newNode;
//         }
//         curr->next = newNode;
//     }

//     return head;
// }

// Node *remove_el(Node *head, int place)
// {
//     if (place == 0) {
//         // Special case for removing the head
//         Node *temp = head;
//         head = head->next;
//         if (head != NULL) {
//             head->back = NULL;
//         }
//         delete temp;
//         return head;
//     }

//     Node *curr = head;
//     int count = 0;

//     // Traverse the list to find the element at the given position
//     while (curr != NULL && count < place) {
//         curr = curr->next;
//         count++;
//     }

//     if (curr != NULL) {
//         // Update the links of neighboring nodes
//         if (curr->back != NULL) {
//             curr->back->next = curr->next;
//         }
//         if (curr->next != NULL) {
//             curr->next->back = curr->back;
//         }
//         delete curr;
//     }

//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *ans = convert(arr);
//     cout << "before Addition" << endl;
//     print(ans);
//     cout << "After Addition" << endl;
//     add_el(ans, 100, 3);
//     print(ans);
//     cout << "After Removal" << endl;
//     remove_el(ans, 3);
//     print(ans);
// }

// -------------------------------------------------------------------------------------------------------------------------------

// Q: Add and remove before and after head ?
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *add_before_head(Node *head, int el)
// {
//     Node *newNode = new Node(el);
//     newNode->next = head;
//     head->back = newNode;
//     head = newNode;
//     return head;
// }

// Node *add_after_tail(Node *head, int el)
// {
//     Node *curr = head;
//     Node *elm = new Node(el);
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = elm;
//     elm->back = curr;
//     elm->next = nullptr;

//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *ans = convert(arr);
//     cout << "before doing anything: ";
//     print(ans);
//     ans = add_before_head(ans, 10);
//     cout << "after adding element before head: ";
//     print(ans);
//     ans = add_after_tail(ans, 10);
//     cout << "after add element after tail: ";
//     print(ans);
// }

// --------------------------------------------------------------------------------------------------------

// Add, remove at any number, replace any number;
// before and after head, tail and any number;

// ==> Insert before any number [][][][][]....!!!
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *new_Node = new Node(arr[i]);
//         curr->next = new_Node;
//         new_Node->back = curr;
//         curr = new_Node;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *insert_before_given_num(Node *head, int position, int num)
// {
//     // Case 1: Inserting before the head
//     if (position == 0)
//     {
//         Node *new_Node = new Node(num);
//         new_Node->next = head;
//         head->back = new_Node;
//         return new_Node; // The new node becomes the new head
//     }

//     Node *curr = head;
//     int count = 0;

//     while (curr != NULL)
//     {
//         if (count == position)
//         {
//             // Create the new node
//             Node *new_Node = new Node(num);

//             // Adjust pointers
//             new_Node->next = curr;
//             new_Node->back = curr->back;

//             // Update the previous node's next pointer
//             if (curr->back != NULL)
//             {
//                 curr->back->next = new_Node;
//             }

//             // Update the current node's back pointer
//             curr->back = new_Node;

//             return head;
//         }
//         curr = curr->next;
//         count++;
//     }

//     return head; // If position is greater than list size, no change
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *res = convert(arr);
//     cout << "Before doing anything" << endl;
//     print(res);

//     res = insert_before_given_num(res, 3, 19); // Insert 19 before the 2nd node
//     cout << "After doing something" << endl;
//     print(res);
// }

// --------------------------------------------------------------------------------------------------------

// Insert After Any number...

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), back(nullptr), next(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << " -> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *insert_after_any_number(Node *head, int position, int val)
// {
//     Node *curr = head;
//     int count = 0;

//     while (curr != NULL)
//     {
//         if (count == position)
//         {
//             Node *newNode = new Node(val);
//             newNode->next = curr->next;  // New node points to the next node of current
//             newNode->back = curr;        // New node points back to current node

//             if (curr->next != NULL)      // If current node's next is not NULL, update the next node's back pointer
//             {
//                 curr->next->back = newNode;
//             }

//             curr->next = newNode;        // Current node points to the new node
//             return head;                 // Return as insertion is done
//         }

//         curr = curr->next;
//         count++;
//     }

//     return head;  // If position is out of bounds, return the unchanged list
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *res = convert(arr);
//     cout << "Before Doing Anything" << endl;
//     print(res);

//     cout << "Before Doing Anything" << endl;
//     insert_after_any_number(res, 0, 19);
//     print(res);
// }

// ----------------------------------------------------------------------------------------------------

// Replace any number in Double LL

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     Node* next;
//     Node* back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr){};
// };

// Node* convert(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }
//     return head;
// }

// void print(Node* head){
//     Node* curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << " -> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;

// }
// Node* replace_any_number(Node* head, int pos, int val){
//     Node* curr = head;
//     int count = 0;

//     while (curr != NULL) {
//         if (count == pos) {
//             Node* newNode = new Node(val);

//             // Update new node's pointers
//             newNode->next = curr->next;
//             newNode->back = curr->back;

//             // Link the previous node to the new node (if not head)
//             if (curr->back != NULL) {
//                 curr->back->next = newNode;
//             } else {
//                 // If replacing the head node
//                 head = newNode;
//             }

//             // Link the next node to the new node (if not tail)
//             if (curr->next != NULL) {
//                 curr->next->back = newNode;
//             }

//             // Free the old node (optional if needed)
//             delete curr;

//             return head;
//         }
//         curr = curr->next;
//         count++;
//     }

//     return head;
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,6};
//     Node *res = convert(arr);
//     cout << "Before Replacing anything ";
//     print(res);
//     replace_any_number(res, 1, 19);
//     cout << "After Replacing any number ";
//     print(res);

// }

// -------------------------------------------------------------------------------------------------------

// Replacing any node and then change it's next node/?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {};
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
//         curr->next = newNode;
//         newNode->back = curr;
//         curr = newNode;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << " -> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *replace_num(Node *head, int pos, int num)
// {
//     Node *curr = head;
//     int count = 0;

//     while (curr != NULL)
//     {
//         if (count == pos)
//         {
//             Node *newNode = new Node(num);

//             newNode->next = curr->next;
//             newNode->back = curr->back;
//             if (curr->back == NULL)
//             {
//                 head = newNode;
//             }
//             else
//             {
//                 curr->back->next = newNode;
//             }
//             if (curr->next == NULL)
//             {
//                 curr->next->back = newNode;
//             }
//             delete curr;
//             return head;
//         }

//         curr = curr->next;
//         count++;
//     }
//     return head;
// }

// Node *add_next_num(Node *head, int target, int num)
// {
//     Node *curr = head;
//     int count = 0;

//     while (curr != NULL)
//     {
//         if (curr->val == target)
//         {
//             Node *newNode = new Node(num);
//             Node *nextNode = curr->next;
//             curr->next = newNode;
//             newNode->next = nextNode;
//             if (nextNode != NULL)
//             {
//                 nextNode->back = newNode;
//             }

//             newNode->back = curr;
//             curr = newNode;
//             return head;
//         }

//         curr = curr->next;
//         count++;
//     }
//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *res = convert(arr);
//     cout << "Original LinkList ";
//     print(res);
//     replace_num(res, 2, 19);
//     cout << "Replace element in LinkList ";
//     print(res);
//     add_next_num(res, 19, 99);
//     cout << " After adding next element to LinkList ";
//     print(res);
// }

//------------------------------------------------------------------------------------------------------

// first replace any element...second add element before and after that element in double LL?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), back(nullptr), next(nullptr) {}
// };

// Node *convert(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
//         newNode->back = curr;
//         curr->next = newNode;
//         curr = newNode;
//     }
//     return head;
// }

// void print(Node *head)
// {
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << " <-> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *replace_elm(Node *head, int pos, int num)
// {
//     Node *curr = head;
//     int count = 0;

//     while (curr != NULL) // Fixed condition here to correctly iterate through the list
//     {
//         if (count == pos)
//         {
//             Node *newNode = new Node(num);

//             newNode->back = curr->back;
//             newNode->next = curr->next;

//             if (curr->back == NULL)
//             {
//                 head = newNode; // Update head if replacing the first node
//             }
//             else
//             {
//                 curr->back->next = newNode;
//             }

//             if (curr->next != NULL) // Fix: ensure curr->next is not null before accessing its pointers
//             {
//                 curr->next->back = newNode;
//             }

//             delete curr; // Safely delete the old node after adjusting pointers
//             return head;
//         }
//         curr = curr->next;
//         count++;
//     }
//     return head;
// }

// Node *add_before_that_elm(Node *head, int target, int num)
// {
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         if (curr->val == target)
//         {
//             Node *newNode = new Node(num);
//             newNode->next = curr;
//             newNode->back = curr->back;

//             if (curr->back != NULL)
//             {
//                 curr->back->next = newNode;
//             }
//             else
//             {
//                 head = newNode; // Update head if new node is inserted at the front
//             }

//             curr->back = newNode;
//             return head;
//         }
//         curr = curr->next;
//     }

//     return head;
// }

// Node *add_after_that_elm(Node *head, int target, int num)
// {
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         if (curr->val == target)
//         {
//             Node *newNode = new Node(num);
//             newNode->back = curr;
//             newNode->next = curr->next;

//             if (curr->next != NULL)
//             {
//                 curr->next->back = newNode;
//             }

//             curr->next = newNode;
//             return head;
//         }
//         curr = curr->next;
//     }

//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *res = convert(arr);
//     cout << "Before Doing AnyThing : ";
//     print(res);

//     res = replace_elm(res, 2, 19); // Ensure to assign the result back to 'res'
//     cout << "After Replacing Any Elm : ";
//     print(res);

//     res = add_before_that_elm(res, 19, 99); // Ensure to assign the result back to 'res'
//     cout << "Adding before that elm : ";
//     print(res);

//     res = add_after_that_elm(res, 19, 999); // Ensure to assign the result back to 'res'
//     cout << "Adding after that elm : ";
//     print(res);
// }

// --------------------------------------------------------------------------------------------------------

// Find Elm and Replace it from the back ?
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    Node *back;
    int val;
    Node(int v) : val(v), back(nullptr), next(nullptr) {}
};

// Function to convert array to doubly linked list
Node *convert(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        newNode->back = curr;
        curr->next = newNode;
        curr = newNode;
    }
    return head;
}

// Function to print the doubly linked list
void print(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " <-> ";
        curr = curr->next;
    }
    cout << "null" << endl;
}

// Function to find the element pos positions from the last
int find_elm_from_last(Node *head, int pos)
{
    Node *curr = head;

    // Traverse to the last node
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    // Backtrack by pos positions
    for (int i = 0; i < pos; i++)
    {
        if (curr->back == NULL) {
            // If we try to backtrack past the head, return an error code
            cout << "Position exceeds the length of the list." << endl;
            return -1;
        }
        curr = curr->back;
    }

    // Return the value at the desired position
    return curr->val;
}

int main()
{
    vector<int> arr = {1, 22, 3, 4, 5, 6};  // Doubly linked list: 1 <-> 22 <-> 3 <-> 4 <-> 5 <-> 6
    Node *res = convert(arr);

    cout << "Original DLL : ";
    print(res);

    int pos = 2;  // Find the 2nd element from the last
    int result = find_elm_from_last(res, pos);
    
    if (result != -1)
    {
        cout << "Element " << pos << " positions from the last is: " << result << endl;
    }

    return 0;
}


// --------------------------------------------------------------------------------------------------------
// Reverse the DLL ?

// --------------------------------------------------------------------------------------------------------
// Replace any number less than given number ?