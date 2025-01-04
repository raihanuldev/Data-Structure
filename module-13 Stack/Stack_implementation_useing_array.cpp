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

    return 0;
}
