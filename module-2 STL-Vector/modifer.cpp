#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v ={1,2,4,5,6};
    //assign new vector
    vector<int>v2;
    v2 = v;

    for(int x:v2)
    {
        cout<<x<<" ";
    }

    return 0;
}