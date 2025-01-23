#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    public:
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

Node* convertArr2LL(vector<int> &arr)
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

int printLenght(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int searchElement(Node *head, int val)
{
    Node* temp = head;
    while(temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    // cout<<y->data<<endl;
    // cout<<y->next<<endl;
    // cout<<y<<endl;

    // Array to LinkedList
    Node* head = convertArr2LL(arr);
    cout<<head->data<<endl;

    // Traverse in Array
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // Length of LinkedList
    cout<<"Printing lenght of LinkedList : "<<printLenght(head)<<endl;

    // Search an element in a LL
    cout<<searchElement(head, 5)<<endl;

return 0;
}