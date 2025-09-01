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

void insert_at_tail(Node* &head,Node* &tail,int value)
{
    Node* newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
    
}

void printing_reverse(Node* tmp){
    //base case
    if(tmp ==NULL){
        return;
    }
    printing_reverse(tmp->next);
    cout <<tmp->val<<endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    printing_reverse(head);
    return 0;
}