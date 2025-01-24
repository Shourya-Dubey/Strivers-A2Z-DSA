#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data, Node *next)
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
Node *convert2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *insertionAtHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}
Node *insertionAtTail(Node *head, int val)
{
    if(head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node *insertionKthPosition(Node *head, int val, int ele)
{
    if(head == NULL)
    {
        if(ele == 1)
        {
            return new Node(val);
        }
    }
    if(ele == 1)
    {
        // Node *temp = new Node(val);
        // temp->next = head;
        return new Node(val, head);
    }
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if(count == ele-1)
        {
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node *insertBeforeValue(Node *head, int k, int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == val)
    {
        return new Node(k, head);
    }

    Node *temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->data == val)
        {
            Node *newNode = new Node(k, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
main()
{
    vector<int> arr{12, 2, 3, 4, 5};
    Node *head = convert2LL(arr);
    head = insertionAtHead(head, 300);
    printLL(head);
    head = insertionAtTail(head, 100);
    printLL(head);
    head = insertionKthPosition(head, 8, 3);
    printLL(head);
    head = insertBeforeValue(head, 50, 8);
    printLL(head);
    return 0;
}