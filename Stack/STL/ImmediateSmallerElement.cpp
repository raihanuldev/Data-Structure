#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;cin>>n;
    stack<int>st;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        // cout<<st.top()<<" ";
        int current = st.top();
        st.pop();

        int next;
        if(st.empty()){
            next = INT_MAX;
        }else{
            next = st.top();
        }
        if(current>next){
            cout<< next<<" ";
        }else{
            cout<<-1<<" ";
        }
    }
    return 0;
}