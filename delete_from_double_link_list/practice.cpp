// Q: convert array to 2d link list?

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// Node *convert_2d_it(vector<int> arr)
// {
//     if (arr.empty())
//         return nullptr; // Handle empty array case

//     Node *head = new Node(arr[0]);
//     Node *prev = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         prev->next = temp;
//         prev = temp;
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
//     Node *convert = convert_2d_it(arr);
//     print(convert);
// }

// ----------------------------------------------------------------------------------------------------------------

// Q: Delete head from the linklist ?
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
//     Node* back;  // Adding back pointer

//     Node(int v): val(v), next(nullptr), back(nullptr) {}
// };

// Node* convert_2d_it(vector<int> arr) {
//     if (arr.empty()) return nullptr;
//     Node* head = new Node(arr[0]);
//     Node* prev = head;
//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         prev->next = temp;
//         temp->back = prev;  // Set the back pointer
//         prev = temp;
//     }
//     return head;
// }

// Node* remove_head(Node* head) {
//     if (head == nullptr) return nullptr;
//     Node* newHead = head->next;
//     if (newHead != nullptr) {
//         newHead->back = nullptr;  // Set the back pointer of the new head to nullptr
//     }
//     delete head;
//     return newHead;
// }

// void print(Node* head) {
//     while (head != nullptr) {
//         cout << head->val << "->";
//         head = head->next;
//     }
//     cout << "null" << endl;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     Node* convert = convert_2d_it(arr);
//     print(convert);

//     Node* ans = remove_head(convert);
//     print(ans);  // Fixed missing semicolon here
// }

// ----------------------------------------------------------------------------------------------------------------

// Q: Delete the last element of the 2D linklist?

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

Node *convert_2d_it(vector<int> arr)
{
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

Node *delete_from_back(Node *head)
{
    if (head == NULL || head->next == nullptr)
        return NULL;
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;

    delete tail;
    return head;
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
    Node *convert = convert_2d_it(arr);
    print(convert);

    Node *ans = delete_from_back(convert);
    print(ans);
}