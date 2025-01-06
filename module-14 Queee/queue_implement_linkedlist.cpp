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

class myQueue
{
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        if(head==NULL){
            return;
        }
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
    
};
int main()
{

    return 0;
}