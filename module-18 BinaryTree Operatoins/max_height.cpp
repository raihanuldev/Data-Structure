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
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        // step-1 ber kore ana maal ta ke
        Node* parent = q.front();
        q.pop();

        //step-2 Node nia Kaj kora
        int l,r;
        Node* myleft,*myright;
        cin>>l>>r;
        if(l==-1) myleft = NULL;
        else myleft =  new Node(l);
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        parent->left = myleft;
        parent->right = myright;

        //step-3 Childreen push kora
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
int max_height(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+ 1;
}
int main()
{
    Node* root = input_tree();
    cout <<max_height(root);
    return 0;
}