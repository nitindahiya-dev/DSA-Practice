// Q: insert before head in double link list ?

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* back;
    Node(int v, Node* n, Node* b): val(v), next(n), back(b) {}
};

Node* convert_it(vector<int> arr){
    Node* head = new Node(arr[0], nullptr,nullptr);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next= temp;
        prev = temp;
    }
    return head;
}

Node* insert_before_head(Node* head, int val){
    Node* newhead = new Node(val, head,nullptr);
    head->back = newhead;
    return newhead;
}

void print(Node* head){
    while (head != nullptr)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convert_it(arr);
    head = insert_before_head(head, 10);
    print(head);
}