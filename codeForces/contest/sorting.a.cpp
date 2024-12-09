#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    while(tcase--){
        int x,y;
        cin>>x;
        cin>>y;
        if(x>y){
            cout << y << " " <<x<<endl;
        }else{
            cout << x << " "<<y<<endl;
        }
    }
    return 0;
}