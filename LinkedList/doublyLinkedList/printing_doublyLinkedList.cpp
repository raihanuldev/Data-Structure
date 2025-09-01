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
void printing_forward(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void printing_backward(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    //connection 
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    
    printing_forward(head);
    printing_backward(tail);
    return 0;
}