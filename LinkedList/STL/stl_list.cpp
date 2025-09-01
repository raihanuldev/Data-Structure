#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>l ={10,20,304};

    list<int>l(10,12);
    list<int>l2(l);
    for(int value:l2){
        cout<<value<<endl;
    }
    // cout<<l.size();
    return 0;
}
/*
*list<type>myList;
Construct a list with 0 elements.
O(1)
list<type>myList(N);
Construct a list with N elements and the value will be garbage.
O(N)
list<type>myList(N,V);
Construct a list with N elements and the value will be V.
O(N)
list<type>myList(list2);
Construct a list by copying another list list2.
O(N)
list<type>myList(A,A+N);
Construct a list by copying all elements from an array A of size N.
O(N)
list<type>myList(v.begin(),v.end());
Construct a list by copying all elements from a vector v.
O(N)


* */