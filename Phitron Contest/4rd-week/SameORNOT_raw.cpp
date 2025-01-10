#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size() { return v.size(); }
    bool empty()
    {
        return v.empty();
    }
};

class myQueue
{
public:
    vector<int> v;
    int frontIndex = 0; 

    void push(int value)
    {
        v.push_back(value);  
    }

    void pop()
    {
        if (!v.empty())
        {
            frontIndex++;  
        }
    }

    int front()
    {
        if (!v.empty())
        {
            return v[frontIndex];
        }
        return -1; 
    }

    int size()
    {
        return v.size() - frontIndex;  }
    bool empty()
    {
        return frontIndex >= v.size();  
    }
};

int main()
{
    myStack st;
    myQueue que;
    int st_testCase, que_testCase;

    cin >> st_testCase >> que_testCase;

    for (int i = 0; i < st_testCase; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < que_testCase; i++)
    {
        int y;
        cin >> y;
        que.push(y);
    }

    if (st_testCase != que_testCase)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while (!st.empty() && !que.empty())
    {
        if (st.top() != que.front())
        {
            isSame = false;
            break;
        }
        st.pop();
        que.pop();
    }

    if (isSame)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
