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
int get_Size(Node* head){
    Node* temp = head;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_any_pos(Node* head,Node* &tail,int idx,int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    int count = get_Size(temp);
    if(count < idx){
        cout<<"Invaild"<<endl;
        return;
    }
    
    if(count ==idx){
        insert_node_tail(head,tail,val);
        return;
    }
    for(int i =1; i<idx;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}

void printing_node(Node* head)
{
    Node* temp = head;
    while(temp !=NULL)
    {
        cout<<(*temp).val<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    int pos,elment;
    while(true){
        cin>>pos >>elment;
        if(pos ==-1){
            break;
        }
        insert_any_pos(head,tail,pos,elment);
        printing_node(head);
    }
    // insert_any_pos(head,tail,1,40);
    // insert_any_pos(head,tail,5,344);
    // insert_any_pos(head,tail,4,344);
    // insert_any_pos(head,tail,1,110);
    
    return 0;
}