#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    set<int>s;
    while(n--){
        int val;cin>>val;
        s.insert(val);
    }
    for(auto it = s.begin(); it!= s.end(); it++)
    {
        cout<< *it<<endl;
    }
    // if you want to check is this availble in your list simply i=you need to use s.count(val)
    return 0;
}