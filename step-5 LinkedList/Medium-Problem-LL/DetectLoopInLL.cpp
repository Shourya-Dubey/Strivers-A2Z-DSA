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

Node *convertLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
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
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool detectLoop(Node *head)
{
    // Brute
    // map<Node*, int> mpp;
    // Node *temp = head;
    // while(temp != NULL)
    // {
    //     if(mpp.find(temp) != mpp.end())
    //     {
    //         return true;
    //     }

    //     mpp[temp]++;
    //     temp = temp->next;
    // }
    // return false;

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}
main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    Node *head = convertLL(arr);
    // printLL(head);
    if(detectLoop(head))
    {
        cout<<"Detect Loop"<<endl;
    }
    else
    {
        cout<<"No Loop Found"<<endl;
    }
    return 0;
}