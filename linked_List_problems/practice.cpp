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

void printll(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node *rotatell(Node *head, int k)
{
    if (k == 0 || head == nullptr)
        return head;

    // Step 1: Count the number of nodes in the list
    int count = 1; // Start with 1 to count the head
    Node *temp = head;
    while (temp->next != nullptr)
    {
        count++;
        temp = temp->next;
    }

    // Step 2: Make the list circular
    temp->next = head; // Connect the last node to the head

    // Step 3: Find the new head position
    int target = k % count; // Effective rotations
    int breakPoint = count - target; // Find the break point
    Node *newTail = head;

    // Step 4: Traverse to the new tail
    for (int i = 1; i < breakPoint; i++)
    {
        newTail = newTail->next;
    }

    // Step 5: Set the new head and break the circular link
    Node *newHead = newTail->next; // New head is the (breakPoint + 1)th node
    newTail->next = nullptr; // Break the circular link

    return newHead; // Return the new head of the rotated list
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original Linked List: ";
    printll(head);

    head = rotatell(head, 4); // Rotate the linked list to the left by 4 places

    cout << "Rotated Linked List: ";
    printll(head);

    return 0;
}
