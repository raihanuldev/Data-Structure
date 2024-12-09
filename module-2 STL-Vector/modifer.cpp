#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v ={1,2,4,5,6};
    //assign new vector
    vector<int>v2;
    v2 = v;
    v2.push_back(12);
    v2.pop_back();
    v2.pop_back();
    v2.insert(v2.begin()+2,60);
    for(int x:v2)
    {
        cout<<x<<" ";
    }

    return 0;
}