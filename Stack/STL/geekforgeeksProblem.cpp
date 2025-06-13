// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        stack<int>st;
        while(!arr.empty())
        {
            st.push(arr.back());
            arr.pop_back();
        }
        while(!st.empty())
        {
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
    }
};