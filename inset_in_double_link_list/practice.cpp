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

#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;
    Node *back;
    Node(int v) : val(v), next(nullptr), back(nullptr){};
};

Node *change_it(vector<int> arr)
{
    if (arr.empty())
        return NULL;

    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}

void insert_before_given_number(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val);
    prev->next = newNode;
    newNode->next = node;
    newNode->back = prev;
    node->back = newNode;
        
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
    Node *head = change_it(arr);
    insert_before_given_number(head->next,10);
    print(head);
}