#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q; cin>>n>>q;
    vector<long long int>a(n+1);
    for(int i =1; i<=n;i++)
    {
        cin>> a[i];
    }

    vector<long long int>pre(n+1);
    pre[1] = a[1]; //frist prefix ta manually dite hoi.
    for(int i =2; i<=n;i++)
    {
        pre[i] = pre[i-1]+a[i];
    }
    // for(int i =1; i<=n;i++)
    // {
    //     cout <<pre[i]<<" ";
    // }


    for(int queryCase =0; queryCase<q;queryCase++){
        int l,r; cin>>l>>r;
        long long int sum = 0;
        if(l==1){
            sum = pre[r];
        }else{
            sum = pre[r]-pre[l-1];
        }
        
        cout<<sum<<endl;
    }
    return 0;
}

//here total time complexity O(qn) 
//now current time complexity o(n) <<updated code