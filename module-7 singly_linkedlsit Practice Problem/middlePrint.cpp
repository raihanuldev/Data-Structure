#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void printing_node(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int mid = count / 2;
    // cout<<mid;
    Node *midNode = head;
    if (count % 2 == 0)
    {
        for (int i = 0; i < mid-1; i++)
        {
            midNode = midNode->next;
        }
        cout << midNode->val<<" ";
        cout << midNode->next->val;
    }
    else
    {
        for (int i = 0; i < mid; i++)
        {
            midNode = midNode->next;
        }
        cout << midNode->val;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_node(head, tail, val);
    }
    printing_node(head);
    return 0;
}