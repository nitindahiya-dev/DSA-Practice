// Q: insert one element in the from on the link list?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL){};
//     Node(int v, Node *n) : val(v), next(n) {} // Added constructor for `insert_head`
// };

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }

//     return head;
// }

// Node *insert_head(Node *head, int val)
// {
//     Node *temp = new Node(val, head);
//     return temp;
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
//     Node *convert = convert_it(arr);
//     print(convert);
//     Node *insert = insert_head(convert, 0);
//     print(insert);
// }

// ---------------------------------------------------------------------------------------------------------------

// Q: Add element in the end of the linklist?
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL) {}
// };

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node* head = new Node(arr[0]);
//     Node* curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }
//     return head;
// }

// Node* add_in_last(Node* head, int val){
//     if(head == NULL) return new Node(val);

//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node* newNode = new Node(val);
//     temp->next= newNode;

//     return head;
// }

// void print(Node* head){
//     Node* curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "-->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
//     }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *convert = convert_it(arr);
//     print(convert);
//     Node* add = add_in_last(convert, 7);
//     print(add);
// }

// ------------------------------------------------------------------------------------------------------------------

// Q: Add element in any postion you want in the linklist ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL){};
//     Node(int v, Node *n) : val(v), next(n) {}
// };

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }

//     return head;
// }

// Node *insert_in_any_place(Node *head, int num, int k)
// {
//     if (head == NULL)
//     {
//         if (k == 1)
//         {
//             return new Node(num);
//         }
//         else
//         {
//             return NULL;
//         }
//     }

//     if (k == 1)
//         return new Node(num, head);

//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         if (count == (k - 1))
//         {
//             Node *x = new Node(num, temp->next);
//             temp->next = x;
//             break;
//         }
//         temp = temp->next;
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
//     Node *convert = convert_it(arr);
//     print(convert);
//     Node *ans = insert_in_any_place(convert, 7, 7);
//     print(ans);
// }

// --------------------------------------------------------------------------------------------------------------

// Q: add element before given element?
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL) {};
//     Node(int v, Node* n) : val(v), next(n) {};
// };

// Node *convert_it(vector<int> arr) {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++) {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }
//     return head;
// }

// Node *add_number(Node *head, int el, int val) {
//     // If the list is empty, just return a new node with the element
//     if (head == NULL) {
//         return new Node(el);
//     }

//     // If the head needs to be the new element, handle it separately
//     if (head->val == val) {
//         return new Node(el, head);
//     }

//     Node *temp = head;
//     while (temp->next != NULL) {
//         if (temp->next->val == val) {
//             Node *newNode = new Node(el, temp->next);
//             temp->next = newNode;
//             return head;
//         }
//         temp = temp->next;
//     }

//     // If the value is not found, add to the end of the list
//     temp->next = new Node(el);

//     return head;
// }

// void print(Node *head) {
//     Node *curr = head;
//     while (curr != NULL) {
//         cout << curr->val << "->";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 6};
//     Node *convert = convert_it(arr);
//     print(convert);

//     // Insert 5 before 6
//     Node *ans = add_number(convert, 5, 6);
//     print(ans);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------

// Q: Find the head of the linklist?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL) {};
//     Node(int v, Node *n) : val(v), next(n) {} // Added constructor for `insert_head`
// };

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;

//     Node* head = new Node(arr[0]);
//     Node* nextNode = head;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         nextNode->next = temp;
//         nextNode = temp;
//     }
//     return head;

// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node* head = convert_it(arr);
//     // cout << head->val;

//     while (head)
//     {
//         cout << head->val << "->" << " ";
//         head = head->next;
//     }

// }

// ---------------------------------------------------------------------------------------------------------

// Q: Delete the Head of the Linklist?
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL){};
// };

// // Function to convert a vector into a linked list
// Node* convert_it(vector<int> arr) {
//     if (arr.empty()) return NULL;

//     Node* head = new Node(arr[0]);
//     Node* curr = head;

//     for (int i = 1; i < arr.size(); i++) {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }
//     return head;
// }

// // Function to remove the head of the linked list
// Node* remove_head(Node* head) {
//     if (head == NULL) return NULL; // If list is empty, return NULL

//     Node* new_head = head->next; // New head will be the second node
//     delete head; // Free the memory of the old head
//     return new_head; // Return the new head of the list
// }

// // Function to print the linked list
// void print(Node* head) {
//     Node* curr = head;
//     while (curr != NULL) {
//         cout << curr->val;
//         if (curr->next != NULL) {
//             cout << " -> ";
//         }
//         curr = curr->next;
//     }
//     cout << " -> null" << endl;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node* convert = convert_it(arr);

//     cout << "Original list:" << endl;
//     print(convert);

//     // Removing the head
//     convert = remove_head(convert);

//     cout << "After removing the head:" << endl;
//     print(convert);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// Q: Insert value before head in linklist ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(NULL) {};
// };

// // Convert a vector into a linked list
// Node *convert_it(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     }
//     return head;
// }

// // Insert a value before the head
// Node* insert_before_head(Node *head, int new_val){
//     Node* new_head = new Node(new_val);  // Create new node with the new value
//     new_head->next = head;               // Point the new node's next to the current head
//     return new_head;                     // Return the new head
// }

// // Function to print the linked list
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
//     Node *convert = convert_it(arr);
//     cout << "before adding \n";
//     // Inserting 0 before the head of the list
//     print(convert);
//     convert = insert_before_head(convert, 0);

//     cout << "after adding \n";
//     // Print the updated list
//     print(convert);
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// Q: Add the element in the last of the linklist?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {};
// };

// Node* convert_it(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
//     };
//     return head;
// }

// void print(Node* head){
//     Node* curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr=curr->next;
//     }
//     cout << "null" << endl;
// }

// Node* add_in_last(Node* head, int x){
//     Node* last_elm = new Node(x);

//     if (head == nullptr) {
//         // If the list is empty, make the new node the head
//         return last_elm;
//     }

//     Node* curr = head;
//     while (curr->next != nullptr) {   // Traverse to the last node
//         curr = curr->next;
//     }
//     curr->next = last_elm;  // Add the new node at the end

//     return head;  // Return the head of the list
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node* convert = convert_it(arr);
//     cout << "Before Adding \n";
//     print(convert);
//     add_in_last(convert, 7);
//     cout << "After Adding \n";
//     print(convert);
// }

// --------------------------------------------------------------------------------------------------------

// Q: Convert the array into linklist and then replace it one Node ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
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
// // Replace the value of a specific node in the linked list
// Node *replace_it(Node *head, int place, int num)
// {
//     Node *curr = head;
//     int count = 1;

//     while (curr != NULL)
//     {
//         if (count == place) // When at the specified position
//         {
//             curr->val = num; // Replace the value of the node
//             break;
//         }
//         count++;
//         curr = curr->next; // Progress through the list
//     }
//     return head; // Return the updated head
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *convert = convert_it(arr);
//     print(convert);
//     replace_it(convert, 3, 10);
//     print(convert);
// }

// -----------------------------------------------------------------------------------------------------------

// Q: Insert element in linkList?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr->next;
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

// // Insert a new node at a specific position in the linked list
// Node *add_el(Node *head, int num, int place)
// {
//     if (place == 1) // Special case to insert before the head
//     {
//         Node *new_head = new Node(num);
//         new_head->next = head;
//         return new_head;
//     }

//     Node *curr = head;
//     int count = 1;

//     // Traverse to the node before the insertion point
//     while (curr != NULL && count < place - 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     if (curr == NULL) {
//         cout << "Position out of range." << endl;
//         return head;
//     }

//     // Insert new node after `curr`
//     Node *new_node = new Node(num);
//     new_node->next = curr->next;
//     curr->next = new_node;

//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *convert = convert_it(arr);
//     print(convert);

//     add_el(convert, 15, 3);
//     print(convert);
// }

// ----------------------------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     Node* back;
//     Node* next;
//     int val;
//     Node(int v): val(v), back(nullptr), next(nullptr){}
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

//     cout << "Null"<< endl;
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,6};
//     Node* ans = convert(arr);
//     print(ans);
// }

// ------------------------------------------------------------------------------------------------

// Q: Insert element at specific location in Double linklist ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
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

// Node *insert_it(Node *head, int pos, int num)
// {
//     Node *newNode = new Node(num);

//     // Insert at the head
//     if (pos == 0)
//     {
//         newNode->next = head;
//         if (head)
//             head->back = newNode;
//         head = newNode;
//         return head;
//     }

//     Node *curr = head;
//     int count = 0;

//     // Traverse to the position before where insertion is needed
//     while (curr != NULL && count < pos - 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     // If position is invalid (beyond the end)
//     if (curr == NULL)
//     {
//         cout << "Position out of bounds!" << endl;
//         return head;
//     }

//     // Insert in the middle or at the end
//     newNode->next = curr->next;
//     newNode->back = curr;
//     if (curr->next)
//     {
//         curr->next->back = newNode;
//     }
//     curr->next = newNode;

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

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Before inserting: ";
//     Node *convert = convert_it(arr);
//     print(convert);

//     cout << "After inserting: ";
//     Node *insert = insert_it(convert, 2, 99); // Insert 99 at position 2
//     print(insert);

//     return 0;
// }
// ------------------------------------------------------------------------------------------------

// Q: replace element at specific location in Double linklist ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
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

// Node *replace_it(Node *head, int pos, int num)
// {
//     // Create a new node with the value `num`
//     Node *newNode = new Node(num);

//     // Traverse to the position of the node to be replaced
//     Node *curr = head;
//     int count = 0;  // Start counting from 0, not 1

//     // Traverse the list to find the node at position `pos`
//     while (curr != NULL && count < pos) {
//         curr = curr->next;
//         count++;
//     }

//     // If `curr` is NULL, the position is out of bounds
//     if (curr == NULL) {
//         cout << "Position out of bounds!" << endl;
//         return head;
//     }

//     // If we are replacing the node at position `pos`
//     if (curr != NULL) {
//         // If there's a next node, adjust its back pointer to point to the new node
//         if (curr->next != NULL)
//             curr->next->back = newNode;

//         // Set the next pointer of `newNode` to the next node of `curr`
//         newNode->next = curr->next;

//         // Set the back pointer of `newNode` to the current node's back
//         newNode->back = curr->back;

//         // If the current node has a previous node, update its next pointer to the new node
//         if (curr->back != NULL)
//             curr->back->next = newNode;

//         // Update the head if we are replacing the first node
//         if (curr == head) {
//             head = newNode;
//         }

//         // Finally, delete the old node
//         delete curr;
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

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Before inserting: ";
//     Node *convert = convert_it(arr);
//     print(convert);

//     cout << "After replace: ";
//     Node *replace = replace_it(convert, 2, 99);
//     print(replace);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Q : add before and after the given location
// Q: add before and after the given number

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;

//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
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
//         cout << curr->val << " <-> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *add_before(Node *head, int number, int pos)
// {
//     Node *nodeToAdd = new Node(number);

//     // If adding at the head (pos == 1)
//     if (pos == 1)
//     {
//         nodeToAdd->next = head;
//         if (head)
//             head->back = nodeToAdd; // Update back pointer of the old head
//         head = nodeToAdd;           // Update head to new node
//         return head;
//     }

//     Node *curr = head;
//     int count = 1;

//     // Traverse to the (pos - 1)-th node
//     while (curr != NULL && count < pos - 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     // If position is invalid
//     if (curr == NULL || curr->next == NULL && count < pos - 1)
//     {
//         cout << "Position out of bounds!" << endl;
//         return head;
//     }

//     // Insert node before the desired position
//     Node *nextNode = curr->next;
//     nodeToAdd->next = nextNode;
//     nodeToAdd->back = curr;

//     if (nextNode != NULL)
//         nextNode->back = nodeToAdd;

//     curr->next = nodeToAdd;

//     return head;
// }

// Node *add_after(Node *head, int number, int pos)
// {
//     Node *AfterNode = new Node(number); // Step 1: Create the new node
//     Node *curr = head;
//     int count = 1;

//     // Traverse to the position `pos`
//     while (curr != NULL && count < pos + 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     // If position is invalid (pos is out of bounds)
//     if (curr == NULL)
//     {
//         cout << "Position out of bounds!" << endl;
//         return head;
//     }

//     // Save the node currently after `pos`
//     Node *nextNode = curr->next;

//     // Link the new node to the correct position
//     AfterNode->next = nextNode;  // New node points to the next node
//     AfterNode->back = curr;      // New node points back to the current node

//     if (nextNode != NULL)        // If there's a node after the current, update its back pointer
//         nextNode->back = AfterNode;

//     curr->next = AfterNode;      // Current node points to the new node

//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Normal list : ";
//     Node *convert = convert_it(arr);
//     print(convert);

//     cout << "Before adding to list : ";
//     Node *add1 = add_before(convert, 19, 2);
//     print(add1);

//     cout << "After adding to list : ";
//     Node *add2 = add_after(convert, 19, 2);
//     print(add2);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     Node *back;
//     int val;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// Node *convert_it(vector<int> arr)
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
//         cout << curr->val << " <-> ";
//         curr = curr->next;
//     }
//     cout << "null" << endl;
// }

// Node *remove_before(Node *head, int pos)
// {
//     if (pos <= 1 || head == nullptr || head->next == nullptr)
//     {
//         // No node exists before the given position
//         cout << "Invalid position for removal!" << endl;
//         return head;
//     }

//     Node *curr = head;
//     int count = 1;

//     // Traverse to the node at position `pos - 1`
//     while (curr->next != nullptr && count < pos - 1)
//     {
//         curr = curr->next;
//         count++;
//     }

//     // If we're at the head, special handling is needed
//     if (curr == head)
//     {
//         Node *toDelete = head;
//         head = head->next;    // Move the head forward
//         head->back = nullptr; // Update the new head's back pointer
//         delete toDelete;
//         return head;
//     }

//     // Unlink the node before `curr`
//     Node *toDelete = curr->back;
//     Node *prevNode = toDelete->back;

//     if (prevNode != nullptr)
//         prevNode->next = curr;
//     curr->back = prevNode;

//     // Free the memory of the node
//     delete toDelete;

//     return head;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Normal list : ";
//     Node *convert = convert_it(arr);
//     print(convert);

//     cout << "After before removal : ";
//     Node *remove1 = remove_before(convert, 2);
// print(remove1);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Reverse single LL...!!

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     int val;
//     Node(int v) : val(v), next(nullptr){}
// };

// Node *convert_it(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
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

// Node* reverse_it(Node* head){
//     Node* curr = head;
//     Node* prev = nullptr;
//     Node* next = nullptr;
//     while (curr != NULL)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Normal list : ";
//     Node *convert = convert_it(arr);
//     print(convert);
//     cout << "Reverse list : ";

//     Node* rev = reverse_it(convert);
//     print(rev);

//     return 0;
// }

// // ------------------------------------------------------------------------------------------------

// // Determine if a given linked list contains a cycle using Floyd’s Cycle Detection Algorithm...!!

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     int val;
//     Node(int v) : val(v), next(nullptr){}
// };

// Node *convert_it(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *curr = head;

//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *newNode = new Node(arr[i]);
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

// bool check_circle(Node* head){
//     Node* slow = head;
//     Node* fast = head;

//     while (fast != nullptr && slow->next != nullptr)
//     {
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;

// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     cout << "Normal list : ";
//     Node *convert = convert_it(arr);
//     print(convert);
//     cout << "Reverse list : ";

//     bool check = check_circle(convert);
//     cout << check;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Write a function to find the middle element of a linked list...!!

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *next;
    int val;
    Node(int v) : val(v), next(nullptr) {}
};

Node *convert_it(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *curr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        curr->next = newNode;
        curr = newNode;
    }
    return head;
}

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
Node *check_middle(Node *head)
{
    if (head == nullptr) return nullptr; // Edge case: empty list

    Node *slow = head;
    Node *fast = head;

    // Move slow one step and fast two steps
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // Slow is now pointing to the middle node
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << "Normal list: ";
    Node *convert = convert_it(arr);
    print(convert);

    Node *middle = check_middle(convert);
    if (middle != nullptr)
        cout << "Middle of the list: " << middle->val << endl;

    return 0;
}

// ------------------------------------------------------------------------------------------------