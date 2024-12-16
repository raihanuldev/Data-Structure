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
void inserting_at_tail(Node* &head,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
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
    inserting_at_tail(head,100);
    inserting_at_tail(head,1200);
    printing_node(head);
    return 0;
}