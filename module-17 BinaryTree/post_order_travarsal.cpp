#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void postOrder(Node* root)
{   if(root==NULL){
        return;
}
    postOrder(root->left); //left er jonno print kore nia asbe
    postOrder(root->right); //right er jonno nia asbe
    cout<<root->val<<" "; //root vlaue print mroebe
    
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    
    //build connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;

    postOrder(root);

    return 0;
}