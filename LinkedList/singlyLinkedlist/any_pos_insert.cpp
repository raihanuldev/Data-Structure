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

void insert_at_any_pos(Node* &head,int idx,int value)
{
    Node* newNode = new Node(value);
    Node* temp = head;

    for(int i =0; i<idx-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printing_node(Node* head)
{
    Node* temp = head;
    while(temp !=NULL)
    {
        cout<<(*temp).val<<endl;
        temp = temp->next;
    }
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    //connection
    head->next = a;
    a->next = b;
    //insert er pala
    insert_at_any_pos(head,2,100);
    insert_at_any_pos(head,1,2222);
    printing_node(head);
    return 0;
}