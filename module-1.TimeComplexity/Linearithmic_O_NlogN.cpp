#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i =0; i<n;i++) // O(N)
    {
        for(int j =1; j<n;j*=2) // O(LogN)
        {
            cout <<"Hello "<<endl;
        }
    }
    //SO There complexity O(N*logN) => O(NlogN)
    return 0;
}