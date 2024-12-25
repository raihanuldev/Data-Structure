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
    Node* sec_head = NULL;
    Node* frist_tail = NULL;
    Node* sec_tail = NULL;
    int x,y;
    while(true){
        cin>>x;
        if(x==-1){
            break;
        }
        inserting_tail(frist_head,frist_tail,x);
    }
    while(true){
        cin>>y;
        if(y==-1){
            break;
        }
        inserting_tail(sec_head,sec_tail,x);
    }
    printing_forward(frist_head);
    return 0;
}