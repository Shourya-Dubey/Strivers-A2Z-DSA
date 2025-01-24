#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
Node* convert2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node* head)
{
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* deleteHead(Node* head)
{
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
main() {
    vector<int> arr{12, 2, 3, 4, 5};
    Node* head = convert2LL(arr);
    printLL(head);
    head = deleteHead(head);
    printLL(head);
return 0;
}