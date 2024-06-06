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

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *back;
    Node(int v) : val(v), next(nullptr), back(nullptr) {}
};

Node *convert_it_1(vector<int> arr)
{
    if (arr.empty())
        return nullptr;
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

Node *convert_it_2(vector<int> arr)
{
    if (arr.empty())
        return nullptr;
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

Node *Add_them(Node *num1, Node *num2)
{
    Node *dummy_node = new Node(-1);
    Node *curr = dummy_node;
    Node *temp1 = num1;
    Node *temp2 = num2;
    int carry = 0;

    while (temp1 != nullptr || temp2 != nullptr)
    {
        int sum = carry;
        if (temp1 != nullptr)
        {
            sum = sum + temp1->val;
            temp1 = temp1->next; // 1
        }
        if (temp2 != nullptr)
        {
            sum = sum + temp2->val;
            temp2 = temp2->next; // 1
        }
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        newNode->back = curr;
        curr = curr->next;
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
        newNode->back = curr;
    }
    return dummy_node->next;
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
    vector<int> arr_1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr_2 = {1, 2, 3, 4, 5, 6};
    Node *head_1 = convert_it_1(arr_1);
    cout << "LinkedList 1 : ";
    print(head_1);
    Node *head_2 = convert_it_2(arr_2);
    cout << "LinkedList 2 : ";
    print(head_2);
    Node *head_3 = Add_them(head_1, head_2);
    cout << "LinkedList 1 + LinkedList 2 : ";
    print(head_3);
}
