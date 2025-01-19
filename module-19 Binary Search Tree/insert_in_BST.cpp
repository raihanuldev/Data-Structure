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
Node* input_tree()
{
    int val;cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();
        
        int l,r; cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft = new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        parent->left = myleft;
        parent->right = myright;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);

    }
    return root;
}

void insert(Node* &root,int val)
{
    if(root==NULL)
        root = new Node(val);
    if(root->val > val){
        //left
        if(root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left,val);
    }
    else{
        //right
         if(root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right,val);
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        //ber kore ana
        Node* front = q.front();
        q.pop();
        //oi node nia kaj kora
        cout<<front->val<<" ";
        //child push kora
        if(front->left!=NULL)
            q.push(front->left);
        if(front->right!=NULL)
            q.push(front->right);
    }
}

int main()
{
    Node* root = input_tree();
    int val; cin>>val;
    insert(root,val);
    levelOrderTraversal(root);
    return 0;
}