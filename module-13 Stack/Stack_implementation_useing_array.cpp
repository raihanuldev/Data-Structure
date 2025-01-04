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
    st.push(10);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    st.push(232);
    cout<<st.top()<<endl;

    return 0;
}
