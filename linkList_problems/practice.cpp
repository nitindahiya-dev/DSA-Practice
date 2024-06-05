// Q: Reverse the linkList ?
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *back;
    Node(int v) : val(v), next(nullptr), back(nullptr) {}
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

Node* reverse_it(Node* head){
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node* current = head;
    Node* last = nullptr;
    
    while (current != nullptr)
    {
        last = current->back; // null
        current->back = current->next; 
        
        current->next = last;
        current = current->back;
    }

    // Before returning the new head of the reversed list
    if (last != nullptr)
    {
        head = last->back;
    }
    
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
    Node *head = change_it(arr);
    print(head);
    head = reverse_it(head); // Correctly update head to the new head of the reversed list
    print(head);
}
