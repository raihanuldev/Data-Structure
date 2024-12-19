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
void insert_tail (Node* &head,Node* &tail,int val)
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
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getSize(Node* head){
    Node* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void getMax(Node* &head){
    Node* temp = head;
    int size = getSize(head);
    int arr[size];
    int max =0;
    for(int i =0; i<size;i++){
        arr[i] = temp->val;
        if(arr[i]>max){
            max = arr[i];
        }
        temp = temp->next;
    }
    cout<<max<<" ";
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_tail(head1,tail1,val);
    }
    getMax(head1);
    return 0;
}