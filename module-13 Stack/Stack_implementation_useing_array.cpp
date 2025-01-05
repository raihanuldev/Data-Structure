#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int>v;

        void push(int value){
            v.push_back(value);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size (){return v.size();}
        bool empty()
        {
            return v.empty();
        }

};

int main()
{
    myStack st;
    
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        st.push(x);
    }

    // cout<<st.top()<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
