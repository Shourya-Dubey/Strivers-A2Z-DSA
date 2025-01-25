#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *back;

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

void printDLL(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node *convert2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for(int i = 1; i<arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp; 
    }
    return head;
}
main()
{
    vector<int> arr{12, 2, 3, 4, 5};
    Node *head = convert2DLL(arr);
    printDLL(head);
    return 0;
}