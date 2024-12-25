#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void inserting_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node* temp = tail;
    newNode->prev = temp;
    temp->next = newNode;
    tail = newNode;
}

void reverse(Node* head,Node* tail)
{
    for(Node *i = head,*j=tail; i!=j && i->prev!=j; i =i->next,j =j->prev)
    {
        swap(i->val,j->val);
    }
}

void printing_forward(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* frist_head = NULL;
    Node* frist_tail = NULL;
    int x;
    while(true){
        cin>>x;
        if(x==-1){
            break;
        }
        inserting_tail(frist_head,frist_tail,x);
    }
    reverse(frist_head,frist_tail);
    printing_forward(frist_head);
    return 0;
}