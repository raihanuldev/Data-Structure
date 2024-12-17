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

void insert_node(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;


}
void printing_node(Node* head){
    Node* temp = head;
    int count=0;
    int arr[101] = {0};
    while(temp!=NULL){
        cout<<temp->val<<endl;
        
        arr[temp->val]++;
        temp = temp->next;
        count++;

    }
    for(int i=0; i<=100;i++){
        if(arr[i]> 1){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    // cout<<count<<endl;
}


int main()
{
    // Node* head = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    // insert_node(head,tail,10);
    // insert_node(head,tail,20);
    // insert_node(head,tail,40);
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_node(head,tail,val);
    }
    printing_node(head);
    return 0;
}