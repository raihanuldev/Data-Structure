#include <bits/stdc++.h>
using namespace std;

bool isVaild(string &s){
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && ((st.top() == '0' && ch == '1') || (st.top() == '1' && ch == '0'))) {
            st.pop();
        } else {
            st.push(ch); 
        }
    }
    return st.empty();
}

int main()
{
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (isVaild(s) ? "YES" : "NO") << endl;
    }
    return 0;
}