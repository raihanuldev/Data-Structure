#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i =0; i<n;i++){ // order of n=> o(n)
        cout <<i<<" ";
    }
    for(int i =0; i<n;i++){ // order of n=> o(n)
        cout <<i<<" ";
    }

    return 0;
    // o(n+n+4)
    //o(2n)
    // o(n)
    // final complexity=> o(n).
}