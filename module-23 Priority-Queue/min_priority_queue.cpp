#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    cout<<pq.top()<<endl;
    pq.push(20);
    pq.push(15);
    pq.push(210);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    
    pq.push(1);
    cout<<pq.top()<<endl;

    return 0;
}