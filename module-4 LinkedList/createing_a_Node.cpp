#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
};

int main()
{
    Node a,b,c;
    a.val=10;
    b.val=20;
    c.val = 30;

    //build connection each node
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    //test node 
    cout <<a.val <<" "<<b.val<<" "<<c.val;
    return 0;
}