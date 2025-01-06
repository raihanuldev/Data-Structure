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
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        if (head == NULL) return; // Safety check
        sz--;
        Node* tmp = head;
        head = head->next;
        delete tmp;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        if (head == NULL) throw runtime_error("Queue is empty!"); // Safety check
        return head->val;
    }
    int back()
    {
        if (tail == NULL) throw runtime_error("Queue is empty!"); // Safety check
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

  
    if (!q.empty())
    {
        cout << q.front() << " " << q.back() << " " << q.size() << endl;
    }
    else
    {
        cout << "Queue is empty!" << endl;
    }

    return 0;
}
