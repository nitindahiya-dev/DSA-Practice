// Find Middle of the Linked List

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// int getMiddle(Node *head)
// {
//     Node *slow = head;
//     Node *fast = head;

//     while (fast != NULL && fast->next != NULL)
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow->data;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     cout << getMiddle(head);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Reverse a Linked List
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// Node* revLL(Node *head)
// {
//     stack<Node *> s;
//     Node *temp = head;

//     // Push all nodes onto the stack
//     while (temp != nullptr)
//     {
//         s.push(temp);
//         temp = temp->next;
//     }

//     // If the stack is empty, return nullptr
//     if (s.empty()) return nullptr;

//     // Pop from the stack to reverse the linked list
//     head = s.top(); // The new head of the reversed list
//     s.pop();
//     temp = head; // Start with the new head

//     while (!s.empty())
//     {
//         temp->next = s.top();
//         s.pop();
//         temp = temp->next;
//     }

//     temp->next = nullptr; // Set the next of the last node to nullptr
//     return head; // Return the new head of the reversed list
// }

// void printLL(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     cout << "Print original LL: ";
//     printLL(head);

//     head = revLL(head); // Update head to the new reversed list
//     cout << "Print reversed LL: ";
//     printLL(head);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Reverse a Doubly Linked List

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//         this->prev = nullptr;
//     }
// };

// void printDLL(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data;
//         if (head->next != nullptr)
//         {
//             cout << "<->";
//         }
//         head = head->next;
//     }
//     cout << " NULL" << endl;
// }

// Node *revDLL(Node *head)
// {
//     if (head == nullptr)
//         return nullptr;

//     Node *currNode = head;
//     Node *temp = nullptr;

//     while (currNode != nullptr)
//     {
//         temp = currNode->prev;
//         currNode->prev = currNode->next;
//         currNode->next = temp;

//         currNode = currNode->prev;
//     }

//     return temp->prev;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->prev = head;
//     head->next->next = new Node(30);
//     head->next->next->prev = head->next;
//     head->next->next->next = new Node(40);
//     head->next->next->next->prev = head->next->next;
//     head->next->next->next->next = new Node(50);
//     head->next->next->next->next->prev = head->next->next->next;
//     head->next->next->next->next->next = new Node(60);
//     head->next->next->next->next->next->prev = head->next->next->next->next;

//     // Set the last node's next to nullptr
//     head->next->next->next->next->next->next = nullptr;

//     cout << "Printing DLL: ";
//     printDLL(head);

//     head = revDLL(head); // Update head to the new head after reversal

//     cout << "Reversed DLL: ";
//     printDLL(head);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *revll(Node *head)
// {
//     if (head == nullptr)
//         return nullptr; // Return nullptr if the list is empty

//     Node *curr = head;
//     Node *prev = nullptr; // Initialize previous node as nullptr

//     while (curr != nullptr)
//     {
//         Node *temp = curr->next; // Store the next node
//         curr->next = prev;       // Reverse the current node's pointer
//         prev = curr;             // Move prev to current node
//         curr = temp;             // Move to the next node
//     }

//     return prev; // Return the new head of the reversed list
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     cout << "Original Linked List: ";
//     printll(head);

//     head = revll(head); // Reverse the linked list and update head

//     cout << "Reversed Linked List: ";
//     printll(head);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *rotatell(Node *head, int k)
// {
//     if (k == 0 || head->next == nullptr)
//         return head;

//     int len = 1;
//     Node *curr = head;
//     while (curr->next != nullptr)
//     {
//         curr = curr->next;
//         len++;
//     }

//     k = k % len;
//     curr->next = head;

//     curr = head;
//     for (int i = 1; i < k; i++)
//     {
//         curr = curr->next;
//     }
//     head = curr->next;
//     curr->next = nullptr;

//     return head;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     cout << "Original Linked List: ";
//     printll(head);

//     head = rotatell(head, 4); // Rotate the linked list to the left by 4 places

//     cout << "Rotated Linked List: ";
//     printll(head);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Program for Nth node from the end of a Linked List
// Given a Linked List of M nodes and a number N, find the value at the Nth node from the end of the Linked List. If there is no Nth node from the end, print -1.

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int find(Node *head, int k)
// {
//     if (head == nullptr)
//         return -1;

//     Node *first = head;
//     Node *second = head;

//     // Move first k nodes ahead
//     for (int i = 0; i < k; i++)
//     {
//         if (first == nullptr) // If k is greater than the length of the list
//             return -1;
//         first = first->next;
//     }

//     // Move both pointers until first reaches the end
//     while (first != nullptr)
//     {
//         first = first->next;
//         second = second->next;
//     }

//     return second->data; // second now points to the Nth node from the end
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);

//     cout << "Original Linked List: ";
//     printll(head);

//     int ans = find(head, 2);
//     cout << "Nth node from the end: " << ans << endl;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Program for deleting last occuring kth element
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// Node *removeLastOccurrence(Node *head, int elm)
// {
//     if (head == nullptr)
//         return nullptr;

//     Node *lastOcc = nullptr;
//     Node *lastOccprev = nullptr;
//     Node *curr = head;
//     Node *currprev = nullptr;

//     while (curr != nullptr)
//     {

//         if (curr->data == elm)
//         {
//             lastOcc = curr;
//             lastOccprev = currprev;
//         }

//         currprev = curr;
//         curr = curr->next;
//     }

//     if (lastOcc == nullptr)
//         return head;

//     if (lastOccprev == nullptr)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     lastOccprev->next = lastOcc->next;
//     delete lastOcc;

//     return head;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(10);
//     head->next->next->next->next->next = new Node(50);
//     head->next->next->next->next->next->next = new Node(60);

//     cout << "Original Linked List: ";
//     printll(head);

//     head = removeLastOccurrence(head, 10);

//     cout << "After removal Linked List: ";
//     printll(head);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Program to remove from the middle

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     int data;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// Node *removemid(Node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//         return nullptr;

//     Node* slow = head;
//     Node* fast = head;
//     Node* prev = nullptr;

//     while (fast != nullptr && fast->next != nullptr)
//     {
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Remove the middle node
//     if (prev != nullptr)
//     {
//         prev->next = slow->next;
//     }

//     delete slow;
//     return head;
// }

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     // Test case 1
//     Node *head1 = new Node(1);
//     head1->next = new Node(2);
//     head1->next->next = new Node(3);
//     head1->next->next->next = new Node(4);
//     head1->next->next->next->next = new Node(5);

//     cout << "Original Linked List: ";
//     printll(head1);
//     head1 = removemid(head1);
//     cout << "After removal of middle Linked List: ";
//     printll(head1);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Program to remove from the duplicate

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     Node *next;
//     int data;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// Node *removedup(Node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         return head;
//     }

//     Node *current = head;

//     while (current->next != nullptr)
//     {
//         if (current->data == current->next->data)
//         {
//             Node* temp = current->next;
//             current->next = current->next->next;
//             delete temp;
//         } else {
//             current = current->next;
//         }
//     }

//     return head;
// }

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     // Test case 1
//     Node *head1 = new Node(1);
//     head1->next = new Node(2);
//     head1->next->next = new Node(3);
//     head1->next->next->next = new Node(4);
//     head1->next->next->next->next = new Node(5);
//     head1->next->next->next->next->next = new Node(5);

//     cout << "Original Linked List: ";
//     printll(head1);
//     head1 = removedup(head1);
//     cout << "After removal of middle Linked List: ";
//     printll(head1);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Detect Loop or Cycle in Linked List

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = nullptr;
//     }
// };

// bool detectloop(Node *head)
// {
//     if (head == nullptr || head->next == nullptr)
//     {
//         return head;
//     }

//     Node *slow = head;
//     Node *fast = head;

//     while (fast != nullptr && fast->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// void printll(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(10);
//     head->next->next->next->next->next = new Node(50);
//     head->next->next->next->next->next->next = new Node(60);

//     cout << "Original Linked List: ";
//     printll(head);
//     head->next->next->next->next->next->next->next = head->next;

//     if (detectloop(head))
//     {
//         cout << "Loop detected in the linked list." << endl;
//     }
//     else
//     {
//         cout << "No loop detected in the linked list." << endl;
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
    }
};

Node *deleteNodesAfterSkipping(Node *head, int nodesToSkip, int nodesToDelete)
{
    if (head == nullptr || head->next == nullptr || nodesToSkip <= 0)
    {
        return head;
    }

    Node *curr = head;

    while (curr != nullptr)
    {
        for (int i = 1; i < nodesToSkip && curr != nullptr; i++)
        {
            curr = curr->next; 
        }

        if (curr == nullptr) // 
            break;

        
        Node *temp = curr->next;
        for (int i = 0; i < nodesToDelete && temp != nullptr; i++)
        {
            Node *toDelete = temp; 
            temp = temp->next; 
            delete toDelete; 
        }

        curr->next = temp; 
        curr = temp;

    return head;
}

void printll(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);
    head->next->next->next->next->next->next->next = new Node(80);

    cout << "Original Linked List: ";
    printll(head);

    int nodesToSkip = 2;    // Number of nodes to skip
    int nodesToDelete = 3;  // Number of nodes to delete
    head = deleteNodesAfterSkipping(head, nodesToSkip, nodesToDelete);

    cout << "Modified Linked List after deletion: ";
    printll(head);

    return 0;
}

