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

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v) : val(v), next(NULL) {}
};

Node *convert_it(vector<int> arr)
{
    if (arr.empty())
        return NULL;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

Node* add_in_last(Node* head, int val){
    if(head == NULL) return new Node(val);

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next= newNode;
    

    return head;
}

void print(Node* head){
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->val << "-->";
        curr = curr->next;
    }
    cout << "null" << endl;
    }

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *convert = convert_it(arr);
    print(convert);
    Node* add = add_in_last(convert, 7);
    print(add);
}