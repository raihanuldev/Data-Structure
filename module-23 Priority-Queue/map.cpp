#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp["hamim"] = 2;
    mp["tamim"] = 2;
    mp["samim"] = 2;
    mp["namim"] = 2;

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first <<" "<<it->second<<endl;
    }
    if(mp.count("hamim")){
        cout<<"Ache";
    }else{
        cout<<"Nai";
    }
    return 0;
}