#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<string>st;
    st.push("google.com");
    st.push("Facebook.com");
    st.push("amazon.com");
    st.push("netfliex.com");
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}