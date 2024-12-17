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
    insert_node_tail(head,tail,10);
    insert_node_tail(head,tail,29);
    printing_node(head);
    return 0;
}