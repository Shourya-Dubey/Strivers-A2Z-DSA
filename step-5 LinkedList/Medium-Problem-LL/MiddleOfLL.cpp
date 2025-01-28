#include<bits/stdc++.h>
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

Node *convertLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1; i<arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = newNode;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node *middleLL(Node *head)
{
    // Brute
    // Node *temp = head;
    // int cnt = 0;
    // while(temp != NULL)
    // {
    //     cnt++;
    //     temp = temp->next;
    // }
    // int middle = (cnt/2) + 1;
    // temp = head;
    // while (temp != nullptr)
    // {
    //     middle--;
    //     if(middle == 0) break;;
    //     temp = temp->next;
    // }
    // return temp;

    // Optimal (Tortois&Hare)
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
main()
{
    vector<int> arr{1,2,3,4,5,6};
    Node *head = convertLL(arr);
    // printLL(head);
    Node *middle = middleLL(head);
    cout<<middle->data<<endl;
return 0;
}