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

void insert_node(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void printing_reverse(Node* head){
    Node* temp = head;
    if(temp ==NULL){
        return;
    }
    printing_reverse(temp->next);
    cout<<temp->val<<" ";
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_node(head,tail,val);
    }
    printing_reverse(head);
    return 0;
}