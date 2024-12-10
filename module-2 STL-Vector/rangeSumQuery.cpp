#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q; cin>>n>>q;
    vector<int>a(n);
    for(int i =0; i<n;i++)
    {
        cin>> a[i];
    }
    for(int queryCase =0; queryCase<q;queryCase++){
        int l,r; cin>>l>>r;
        int sum = 0;
        for(int i =l; i<=r; i++){
            sum+=a[i-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}