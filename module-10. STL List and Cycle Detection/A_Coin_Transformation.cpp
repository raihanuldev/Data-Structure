#include <bits/stdc++.h>
using namespace std;

long long maxCoins(long long n){
    if(n<=3) return 1;
    return 2*maxCoins(n/4);
}

int main()
{

    int tcase;cin>>tcase;
    while(tcase--){
        long long n;cin>>n;
        cout<<maxCoins(n)<<endl;

    }
    return 0;
}