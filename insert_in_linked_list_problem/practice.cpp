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