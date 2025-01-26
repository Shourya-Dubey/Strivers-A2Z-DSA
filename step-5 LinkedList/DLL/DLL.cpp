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

Node *deleteHead(Node *head)
{
    if(head == NULL || head->next == NULL) return head;

    Node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *tail = head;
    while(tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node *deleteKthElement(Node *head, int k)
{
    if(head == NULL) return NULL;

    int count = 0;
    Node *temp = head;
    while (temp->next == nullptr)
    {
        count++;
        if(count == k) break;
        temp = temp->next;
    }

    Node *previous = temp->back;
    Node *front = temp->next;
    if(previous == nullptr && front == nullptr)
    {
        return NULL;
    }
    else if(previous == nullptr)
    {
        return deleteHead(head);
    }
    else if(front == nullptr)
    {
        return deleteTail(head);
    }

    previous->next = front;
    front->back = previous;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}

void *deleteNode(Node *node)
{
    Node *prev = node->back;
    Node *front = node->next;

    if(front == NULL)
    {
        prev->next = nullptr;
        node->back = nullptr;
        delete node;
    }

    prev->next = front;
    front->back = prev;
    node->next = node->back = nullptr;
    delete node;
}

main()
{
    vector<int> arr{12, 2, 3, 4, 5};
    Node *head = convert2DLL(arr);
    printDLL(head);
    // head = deleteHead(head);
    // printDLL(head);
    // head = deleteTail(head);
    // printDLL(head);
    // head = deleteKthElement(head, 5);
    // printDLL(head);
    deleteNode(head->next);
    printDLL(head);      
    return 0;
}