#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> que;
    int st_testCase, que_testCase;

    cin >> st_testCase >> que_testCase;

    for (int i = 0; i < st_testCase; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < que_testCase; i++) {
        int y;
        cin >> y;
        que.push(y);
    }

    if (st_testCase != que_testCase) {
        cout << "NO" << endl;
        return 0;
    }

   
    bool isSame = true;
    while (!st.empty() && !que.empty()) {
        if (st.top() != que.front()) {
            isSame = false;
            break;
        }
        st.pop();
        que.pop();
    }
    if(isSame){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
