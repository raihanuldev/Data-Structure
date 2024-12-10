#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++){ // o(N)
        int x; cin>>x;
        if(x==0){
            v[i]=x;
        }else if(x>0){
            v[i] = 1;
        }
        else{
            v[i] = 2;
        }
    }
    for(int i =0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    //total time complexity => o(N)
    return 0;
}