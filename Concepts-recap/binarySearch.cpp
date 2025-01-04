#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,6,8,9,9};
    int val = 7;
    int l =0;
    int r = 9;
    int flag = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]== val){
            flag = 1;
            break;
        }else if(a[mid]>val){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    cout<<flag<<endl;
    return 0;
}