#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int curr_idx = v.size() - 1;
    while (curr_idx!=0)
    {
        int par_idx = (curr_idx - 1) / 2;
        if (v[par_idx] < v[curr_idx])
        {
            swap(v[par_idx], v[curr_idx]);
        }
        else
        {
            break;
        }
        curr_idx = par_idx;
    }
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}