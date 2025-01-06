#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int n; cin>>n;
    while(n--){
        int val;cin>>val;
        q.push(val);
    }

    //print
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}