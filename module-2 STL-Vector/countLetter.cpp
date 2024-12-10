#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(26);
    string s;cin>>s;
    
    int len = s.size();

    for(int i=0; i<len;i++){    // o(N)
        int index = s[i]-'a';
        v[index]+=1;
    }   
    for(int i =0; i<26; i++){ // o(N)
        if(v[i]>0){
            cout<< char('a'+i)<<" : " << v[i]<< endl;
        }
    }
    // Time complexity => o(N)
    return 0;
}