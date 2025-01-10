#include <bits/stdc++.h>
using namespace std;

bool canBeEmpty(string s) {
    stack<char> stk;

    for (char c : s) {
        if (!stk.empty() && (stk.top() == '0' && c == '1') ){
            stk.pop();
        } else {
            stk.push(c);
        }
    }

    return stk.empty();
}

int main()
{
     int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (canBeEmpty(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}