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
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int v) : val(v), next(NULL) {};
    Node(int v, Node* n) : val(v), next(n) {};
};

Node *convert_it(vector<int> arr) {
    if (arr.empty())
        return NULL;
    Node *head = new Node(arr[0]);
    Node *curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }
    return head;
}

Node *add_number(Node *head, int el, int val) {
    // If the list is empty, just return a new node with the element
    if (head == NULL) {
        return new Node(el);
    }

    // If the head needs to be the new element, handle it separately
    if (head->val == val) {
        return new Node(el, head);
    }

    Node *temp = head;
    while (temp->next != NULL) {
        if (temp->next->val == val) {
            Node *newNode = new Node(el, temp->next);
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }

    // If the value is not found, add to the end of the list
    temp->next = new Node(el);

    return head;
}

void print(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->val << "->";
        curr = curr->next;
    }
    cout << "null" << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    Node *convert = convert_it(arr);
    print(convert);

    // Insert 5 before 6
    Node *ans = add_number(convert, 5, 6);
    print(ans);

    return 0;
}
