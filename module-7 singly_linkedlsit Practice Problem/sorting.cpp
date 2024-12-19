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
void sorting_linklist(Node* head)
{

    for(Node* i = head; i < i->next !=NULL;i = i->next){
        for(Node* j = i->next; j !=NULL;j = j->next){
            // if(i->val > j->val){
            //     swap(i->val,j->val);
            // }
            if(i->val < j->val){
                swap(i->val,j->val);
            }
        }
    }
}

void printing_node(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    // printing_reverse(head);
     sorting_linklist(head);
    printing_node(head);
    return 0;
}