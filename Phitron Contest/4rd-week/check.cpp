#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; // Number of test cases.

    while (t--) {
        string s;
        cin >> s;

        stack<char> st;

        for (char ch : s) {
            if (!st.empty() && ((ch == '0' && st.top() == '1') || (ch == '1' && st.top() == '0'))) {
                st.pop(); // Remove the top of the stack if it forms a valid pair.
            } else {
                st.push(ch); // Push the current character onto the stack.
            }
        }

        if (st.empty()) {
            cout << "YES" << endl; // String is valid.
        } else {
            cout << "NO" << endl; // String is invalid.
        }
    }

    return 0;
}