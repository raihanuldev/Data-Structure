#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,2,34,4,5,7,8,9,74};
    
    //find value
    auto it= find(v.begin(),v.end(),344); //iterator return dibe 
    if(it==v.end())
    {
        cout<<"Not Found!";
    }else{
        cout << "Found";
    }
    return 0;
}