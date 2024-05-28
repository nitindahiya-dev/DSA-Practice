// Q: For a given Singly LinkedList, insert a node at the beginning of the linked list.

// Example :

// Input: List = 10->20->30->40->null, Node = 0
// Output: 0->10->20->30->40->null
// Explanation: Inserted the given node at the beginning of the linked list.

// #include <bits/stdc++.h>

// using namespace std;

// class ListNode {
//   public:
//     int val;
//   ListNode * next;
//   ListNode(int x) {
//     val = x;
//     next = NULL;
//   }
// };

// void PrintList(ListNode * head) // Function to print the LinkedList
// {
//   ListNode * curr = head;
//   for (; curr != NULL; curr = curr -> next)
//     cout << curr -> val << "-->";
//   cout << "null" << endl;
// }

// ListNode * InsertatFirst(int value, ListNode * head) {

//   // Step1 : creating a new Node with the given val
//   ListNode * newnode = new ListNode(value);

//   // Step2 : Making next of newly created Node to point the head of LinkedList
//   newnode -> next = head;

//   // Making the newly created Node as head
//   head = newnode;
//   return head;
// }

// int main() {
//   ListNode * head = NULL; // head of the LinkedList
//   head = InsertatFirst(40, head);
//   head = InsertatFirst(30, head);
//   head = InsertatFirst(20, head);
//   head = InsertatFirst(10, head);
//   cout << "LinkedList before inserting 0 at beginning : " << endl;
//   PrintList(head);
//   head = InsertatFirst(0, head);
//   cout << "LinkedList after inserting 0 at beginning : " << endl;
//   PrintList(head);
//   return 0;
// }

// ------------------------------------------------------------------------------------------------------------------

// Q: convert array to linklist?

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node* next;
//     Node(int x) : val(x), next(NULL){}
// };

// Node* arrtoll(vector<int> arr){
//     if(arr.empty()) return NULL;
//     Node* head = new Node(arr[0]);
//     Node* curr = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         curr->next = new Node(arr[i]);
//         curr = curr ->next;
//     }
//     return head;
// }

// void print(Node* head){
//     Node* curr = head;
//     while (curr != NULL)
//     {
//         cout << curr->val << "->";
//         curr = curr-> next;
//     }

//     cout << "NULL" << endl;

// }

// int main(){
//     vector<int> arr = { 12, 5, 6, 7, 5};
//     Node* head = arrtoll(arr);
//     print(head);
// }

// ------------------------------------------------------------------------------------------------------------------

// Q: Delete head from the linklist?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int x) : val(x), next(NULL) {}
// };

// Node *arrtoll(vector<int> arr)
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

// Node *remove_head(Node *head)
// {
//     if (head == NULL)
//         return head;

//     Node *temp = head;
//     head = head->next;
//     delete temp;
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

//     cout << "NULL" << endl;
// }

// int main()
// {
//     vector<int> arr = {12, 5, 6, 7, 5};
//     Node *head = arrtoll(arr);
//     print(head);
//     head = remove_head(head);
//     print(head);
// }

// -----------------------------------------------------------------------------------------------------------------

// Q: Delete last element from linklist ?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int x) : val(x), next(NULL) {}
// };

// Node *arrtoall(vector<int> arr)
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

// Node* removelast(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;

//     Node *temp = head;
//     while (temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = nullptr;

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
//     vector<int> arr = {12, 5, 6, 7, 5};
//     Node *convert = arrtoall(arr);
//     print(convert);
//     Node *rmlast = removelast(convert);
//     print(rmlast);
// }
