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
void insert_node_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_any_pos(Node* head,int idx,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =1; i<idx;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    // cout<<temp->val;
    
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
    Node* head =NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;;
        }
        insert_node_tail(head,tail,val);
    }
    insert_any_pos(head,1,2444);
    printing_node(head);
    return 0;
}