#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node* temp = tail;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_any_pos(Node* &head,int idx,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =0;i<idx-1;i++){
        temp = temp->next;

    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    temp->next->prev =newNode;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    // Node* head = NULL;
    // Node* tail = NULL;
    //connection 
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_tail(head,tail,40);
    insert_any_pos(head,2,70);
    printing_forward(head);
    
    return 0;
}