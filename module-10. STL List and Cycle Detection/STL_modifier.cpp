#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l ={10,20,30};
    list<int>l2;
    l2 = l;
    l2.push_back(40);
    l2.push_front(5);
    l2.pop_back();
    l2.pop_front();
    //insert at specific positon
    l2.insert(next(l2.begin(),2),16);
    l2.insert(next(l2.begin(),2),18);
    //we can insert multiple val;
    l2.insert(next(l2.begin(),2),{12,34,5});

    //erase
    l2.erase(next(l2.begin(),3));
    l2.erase(next(l2.begin(),2));
    l2.erase(next(l2.begin(),0));
    //replace;
    replace(l2.begin(),l2.end(),30,300);
    replace(l2.begin(),l2.end(),20,2000);
    for(int val:l2){
        cout<<val<<endl;
    }
    return 0;
}