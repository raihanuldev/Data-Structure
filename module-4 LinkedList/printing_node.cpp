#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(34);
    Node* c = new Node(34444);

    //link connection
    head->next = a;
    a->next = b;
    b->next = c;

    //printy node
    Node* temp = head;
    while(temp)   //becuase last node next pointer would be NULL;
    {
        cout << temp->val<<endl;
        temp = temp->next;
    }
    return 0;
}