#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)  //Complexity=> O(1)
    {
        Node *newNode = new Node(value);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()   //Complexity=> O(1)
    {
        if (tail == NULL)
        {   
            return;
        }
        Node *tmp = tail;
        tail = tail->prev;
         if (tail) 
            tail->next = NULL;
        else
            head = NULL; 
        delete tmp;
        sz--;
    }
    int top() //Complexity=> O(1)
    {
        if(tail){
            return tail->val;
        }
    }
    int size() //Complexity=> O(1)
    {
        return sz;
    }
    
    bool empty() //Complexity=> O(1)
    {
        return (head == NULL);
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // cout<<st.top()<<endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
