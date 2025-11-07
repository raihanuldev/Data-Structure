/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 * 
 */ 
#include <bits/stdc++.h>
using namespace std;

class myStack
{
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
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    return 0;
}
