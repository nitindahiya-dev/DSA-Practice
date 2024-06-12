// Q: Reverse the linkList ?
// #include <iostream>
// #include <vector>
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

// Node* reverse_it(Node* head){
//     if (head == nullptr || head->next == nullptr)
//     {
//         return head;
//     }

//     Node* current = head;
//     Node* last = nullptr;

//     while (current != nullptr)
//     {
//         last = current->back; // null
//         current->back = current->next;

//         current->next = last;
//         current = current->back;
//     }

//     // Before returning the new head of the reversed list
//     if (last != nullptr)
//     {
//         head = last->back;
//     }

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
//     print(head);
//     head = reverse_it(head); // Correctly update head to the new head of the reversed list
//     print(head);
// }

// ----------------------------------------------------------------------------------------------------

// Q: Add 2 link list ?

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

// Node *convert_it_1(vector<int> arr)
// {
//     if (arr.empty())
//         return nullptr;
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

// Node *convert_it_2(vector<int> arr)
// {
//     if (arr.empty())
//         return nullptr;
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

// Node *Add_them(Node *num1, Node *num2)
// {
//     Node *dummy_node = new Node(-1);
//     Node *curr = dummy_node;
//     Node *temp1 = num1;
//     Node *temp2 = num2;
//     int carry = 0;

//     while (temp1 != nullptr || temp2 != nullptr)
//     {
//         int sum = carry;
//         if (temp1 != nullptr)
//         {
//             sum = sum + temp1->val;
//             temp1 = temp1->next; // 1
//         }
//         if (temp2 != nullptr)
//         {
//             sum = sum + temp2->val;
//             temp2 = temp2->next; // 1
//         }
//         Node *newNode = new Node(sum % 10);
//         carry = sum / 10;

//         curr->next = newNode;
//         newNode->back = curr;
//         curr = curr->next;
//     }
//     if (carry)
//     {
//         Node *newNode = new Node(carry);
//         curr->next = newNode;
//         newNode->back = curr;
//     }
//     return dummy_node->next;
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
//     vector<int> arr_1 = {1, 2, 3, 4, 5, 6};
//     vector<int> arr_2 = {1, 2, 3, 4, 5, 6};
//     Node *head_1 = convert_it_1(arr_1);
//     cout << "LinkedList 1 : ";
//     print(head_1);
//     Node *head_2 = convert_it_2(arr_2);
//     cout << "LinkedList 2 : ";
//     print(head_2);
//     Node *head_3 = Add_them(head_1, head_2);
//     cout << "LinkedList 1 + LinkedList 2 : ";
//     print(head_3);
// }

// --------------------------------------------------------------------------------------------------

// Q: find the middle node of the linkdedlist?

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

// Node* convert_it(vector<int> arr){
//     if(arr.empty()) return NULL;
//     Node* head = new Node(arr[0]);
//     Node* prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// Node* find_middle(Node* head){

// Node* slow = head;
// Node* fast = head;
// while (fast != nullptr && fast->next != nullptr)
// {
//     slow = slow->next;
//     fast = fast->next->next;
// }
// return slow;

// }

// void print(Node* head){
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
//     Node* head = convert_it(arr);
//     cout << "Linked List: ";
//     print(head);

//     Node* middle = find_middle(head);
//     if (middle != nullptr)
//     {
//         cout << "Middle Node: " << middle->val << endl;
//     }
//     else
//     {
//         cout << "The list is empty." << endl;
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------

// Q: reverse the link list?

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

// Node* convert_it(vector<int> arr){
//     if(arr.empty()) return NULL;
//     Node* head = new Node(arr[0]);
//     Node* prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// -------------------- brute force --------------------

// Node* reverse_it(Node* head){
//     Node* temp = head;
//     stack<int> st;
//     while (temp != nullptr) {
//         st.push(temp->val);
//         temp = temp->next;
//     }
//     temp = head;

//     while (temp != nullptr) {
//         temp->val = st.top();
//         st.pop();
//         temp = temp->next;
//     }
// }

// -------------------- brute force --------------------
// -------------------- Optimal approach --------------------

// Node* reverse_it(Node* head){
//     if (head == nullptr || head->next == nullptr)
//     {
//         return head;
//     }

//     Node* current = head;
//     Node* last = nullptr;

//     while (current != nullptr)
//     {
//         last = current->back; // null
//         current->back = current->next;

//         current->next = last;
//         current = current->back;
//     }

//     // Before returning the new head of the reversed list
//     if (last != nullptr)
//     {
//         head = last->back;
//     }

//     return head;
// }

// -------------------- Optimal approach --------------------

// void print(Node* head){
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
//     Node* head = convert_it(arr);
//     cout << "Linked List: ";
//     print(head);

// brute force
//  reverse_it(head);
// cout << "reverse Linked List: ";
// print(head);
// //optimal apporach
//     head = reverse_it(head);
//     cout << "reverse Linked List: ";
//     print(head);
//}

// --------------------------------------------------------------------------------------------------

// Q: Detect a Cycle in a Linked List?

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

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++) // Start from index 1
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// bool check_loop(Node *head)
// {
//     Node *slow = head;
//     Node *fast = head;

//     while (fast != nullptr && fast->next != nullptr) // Correct condition
//     {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) return true;
//     }
//     return false;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = convert_it(arr);
//     bool ans = check_loop(head);
//     if(ans)
//     {
//         cout << "Yes, it is a loop" << endl;
//     }
//     else
//     {
//         cout << "No, it isn't a loop" << endl;
//     }
//     return 0; // Proper return statement
// }

// ------------------------------------------------------------------------------------------------

// Q: find the starting point of the loop in linkedList ?

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

// Node *convert_it(vector<int> arr)
// {
//     if (arr.empty())
//         return NULL;
//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++) // Start from index 1
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// Node *find_node(Node *head)
// {
//     Node *slow = head;
//     Node *fast = head;

//     // Check for loop condition
//     while (fast != nullptr && fast->next != nullptr)
//     {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast)
//         {
//             // Loop detected
//             slow = head;
//             while (slow != fast)
//             {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             // Return the starting node of the loop
//             return slow;
//         }
//     }

//     // No loop detected
//     return NULL;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = convert_it(arr);

//     Node *loopStartNode = find_node(head);

//     if (loopStartNode)
//     {
//         cout << "Loop detected. Starting node of the loop is: " << loopStartNode->val << endl;
//     }
//     else
//     {
//         cout << "No loop detected in the linked list." << endl;
//     }

//     return 0; // Proper return statement
// }

// ----------------------------------------------------------------------------------------------------

// Q: find the length of linkedList?
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

// int find_length(Node *head)
// {
//     Node *slow = head;
//     Node *fast = head;
//     while (fast != nullptr && fast->next != nullptr)
//     {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast)
//         {
//             int counter = 1;
//             Node *temp = slow;
//             while (temp->next != slow)
//             {
//                 counter++;
//                 temp = temp->next;
//             }
//             return counter;
//         }
//     }
//     return 0; // No loop
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node *head = convert_it(arr);

//     // Creating a loop for testing
//     head->next->next->next->next->next->next = head->next->next;

//     int length = find_length(head);
//     if (length > 0)
//     {
//         cout << "Loop detected. Length of the loop is: " << length << endl;
//     }
//     else
//     {
//         cout << "No loop detected in the linked list." << endl;
//     }

//     return 0; // Proper return statement
// }

// --------------------------------------------------------------------------------------------------

// Q: Check if a LinkedList is Palindrome or Not ?
// eg: 1 - 2 - 3 - 3 - 2 - 1;
// eg: 1 - 2 - 3 - 2 - 1;

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;
//     Node *back;
//     Node(int v) : val(v), next(nullptr), back(nullptr) {}
// };

// // Function to reverse a linked list and return the new head
// Node* reverse(Node* head) {
//     Node* prev = nullptr;
//     Node* current = head;
//     while (current != nullptr) {
//         Node* next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }

// Node* convert_it(vector<int> arr) {
//     if (arr.empty()) return NULL;
//     Node* head = new Node(arr[0]);
//     Node* prev = head;

//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;
//         prev = temp;
//     }
//     return head;
// }

// bool is_palindrome(Node* head) {
//     if (!head || !head->next) return true;

//     // Find the middle of the linked list
//     Node* slow = head;
//     Node* fast = head;
//     while (fast->next != nullptr && fast->next->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Reverse the second half
//     Node* second_half = reverse(slow->next);

//     // Compare the first half and the reversed second half
//     Node* first_half = head;
//     Node* second_half_copy = second_half;
//     bool palindrome = true;
//     while (second_half_copy != nullptr) {
//         if (first_half->val != second_half_copy->val) {
//             palindrome = false;
//             break;
//         }
//         first_half = first_half->next;
//         second_half_copy = second_half_copy->next;
//     }

//     // Restore the original list (reverse the second half back)
//     slow->next = reverse(second_half);

//     return palindrome;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 2, 1};
//     Node* head = convert_it(arr);

//     if (is_palindrome(head)) {
//         cout << "Yes, it is a palindrome" << endl;
//     } else {
//         cout << "No, it isn't a palindrome" << endl;
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Q: seperate it in odd and even linkedlist?

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
//     if (arr.empty())
//         return NULL;

//     Node *head = new Node(arr[0]);
//     Node *current = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         current->next = new Node(arr[i]);
//         current = current->next;
//     }
//     return head;
// }

// Node *fix_it(Node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//         return NULL;

//     Node *odd = head;
//     Node *even = head->next;
//     Node *newHead = even;
//     while (even != nullptr && even->next != nullptr)
//     {
//         odd->next = odd->next->next;
//         even->next = even->next->next;

//         odd = odd->next;
//         even = even->next;
//     }

//     odd->next = newHead;

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
//     Node *head = convert_it(arr);
//     print(head);
//     Node *ans = fix_it(head);
//     print(ans);
// }

// ----------------------------------------------------------------------------------------------------

// Q: delete the nth node from the end?

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node* next;
//     Node(int d) : data(d), next(nullptr){}
// };

// Node* convert_it(vector<int> arr){
//     Node* head = new Node(arr[0]);
//     Node* current = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         current->next = new Node(arr[i]);
//         current = current->next;
//     }
//     return head;

// }

// Node* fix_it(Node* head, int N) {
//     // Create two pointers, fast and slow
//     Node* fast = head;
//     Node* slow = head;

//     // Move the fast pointer N nodes ahead
//     for (int i = 0; i < N; i++)
//         fast = fast->next;

//     // If fast becomes NULL,
//     // the Nth node from the end is the head
//     if (fast == NULL)
//         return head->next;

//     // Move both pointers until fast reaches the end
//     while (fast->next != NULL) {
//         fast = fast->next;
//         slow = slow->next;
//     }

//     // Delete the Nth node from the end
//     Node* delNode = slow->next;
//     slow->next = slow->next->next;
//     delete delNode;
//     return head;
// }

// void print(Node* head){
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,6};
//     Node* head = convert_it(arr);
//     print(head);
//     Node* ans = fix_it(head,3);
//     print(ans);
// }

// ----------------------------------------------------------------------------------------------------

// Q: convert linkedlist into array ?

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
};

Node *convert_it(vector<int> arr)
{
    if (arr.empty())
        return NULL;

    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < arr.size(); i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

vector<int> convert_back(Node *head)
{
    vector<int> arr;
    while (head != NULL)
    {
        arr.push_back(head->val);
        head = head->next;
    }
    return arr;
    
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert_it(arr);
    print(head);
    vector<int> ans = convert_back(head);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
}