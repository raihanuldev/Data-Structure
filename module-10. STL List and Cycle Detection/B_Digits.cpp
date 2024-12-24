#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n,d; cin>>n>>d;
        vector<int>oddDigit = {1,3,5,7,9};
        vector<int>result;
        for(int odd: oddDigit){
            if(d% odd ==0)
            {
                result.push_back(odd);
            }
        }
        for (int i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}