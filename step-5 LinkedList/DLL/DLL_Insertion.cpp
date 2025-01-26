#include <bits/stdc++.h>
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *convert2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *insertBeforeHead(Node *head , int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node *insertBeforeTail(Node *head, int val)
{
    if(head->next == nullptr)
    {
        return insertBeforeHead(head, val);
    }

    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node *insertBeforeKthElement(Node *head, int val, int k)
{
    if (k == 1)
    {
        return insertBeforeHead(head, val);
    }

    Node *temp = head;
    int count = 0;
    while(temp->next != NULL)
    {
        count++;
        if(count == k) break;
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;
}

void insertBeforeNode(Node *node, int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

main()
{
    vector<int> arr{12, 2, 3, 4, 5};
    Node *head = convert2DLL(arr);
    printDLL(head);
    head = insertBeforeHead(head, 11);
    printDLL(head);
    head = insertBeforeTail(head, 15);
    printDLL(head);
    head = insertBeforeKthElement(head, 10, 3);
    printDLL(head);
    insertBeforeNode(head->next, 7);
    printDLL(head);
    return 0;
}