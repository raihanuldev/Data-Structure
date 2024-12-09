#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);    
    cout<<v.capacity() <<endl;
    cout <<v.size()<<endl;
    v.clear();
    cout<<v.size();
    return 0;
}