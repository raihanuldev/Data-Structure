#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;cin>>n;
    vector<int>v(n);
    for(int i =0; i<n; i++){  // o(N)
        cin>>v[i];
    }
    int count =0;
    for(int i =0; i<n;i++)  //o(N*N)
    {
        for(int j =0; j<n; j++){
            if(v[i]+1==v[j]){
                count++;
                break;
            }
        }
    }
    cout <<count;

    //this code time complexity => O(N^2)
    return 0;
}