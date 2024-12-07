#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int sum =0;
    //useing loop
    // for(int i =1; i<=n; i++){
    //     sum+=i;
    // }
    //useing formula
    sum = (n*(n+1)/2);
    cout<<sum;
    return 0;
}